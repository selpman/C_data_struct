#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

void initStack(stack_t* s, int size, int element_size)
{
	s -> pArr = malloc(element_size*size);
	assert( s->pArr );

	s -> element_size = element_size;
	s -> size = size;
	s -> tos = 0;
}

void cleanupStack(stack_t* s)
{
	free( s->pArr );
}

void push(stack_t* s,const void* pData)
{
	assert( s->tos != s->size);	
	//memcpy(&s->pArr[(s->tos)++], pData, s->element_size);
	//&s->pArr[(s->tos)++] -> dereference error
	memcpy((unsigned char*)s->pArr+((s->tos) * (s->element_size)), pData,s->element_size);
	(s->tos)++;
	//int a ; a++ = 4byte 
	//double b; b++ = 8byte
	//void c; c++ = 1byte
}

void pop(stack_t* s, void* pData)
{
	assert( s->tos != 0 );
	//memcpy(pData,&s->pArr[--(s->tos)],s->element_size);
	(s->tos)--;
	memcpy(pData,(unsigned char*)s->pArr+((s->tos)*(s->element_size)),s->element_size);
}
