#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void initStack(stack_t* s, int size)
{
	s -> pArr = (int*) malloc(sizeof(int)*size);
	assert( s->pArr );

	s -> size = size;
	s -> tos = 0;
}

void cleanupStack(stack_t* s)
{
	free( s->pArr );
}

void push(stack_t* s,int data)
{
	assert( s->tos != s->size);	
	s->pArr[(s->tos)++] = data;
}

int pop(stack_t* s)
{
	assert( s->tos != 0 );
	return s->pArr[--(s->tos)];
}
