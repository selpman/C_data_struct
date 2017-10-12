#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

void initQueue(queue_t* q, int size, int element_size)
{
	q -> pArr = malloc(element_size*size);
	assert( q->pArr );

	q -> element_size = element_size;
	q -> size = size;
	q -> front = 0;
	q -> rear = 0;
}

void cleanupQueue(queue_t* q)
{
	free( q->pArr );
}

void push(queue_t* q,const void* pData)
{
	assert( q->rear != q->size);	
	//memcpy(&s->pArr[(s->tos)++], pData, s->element_size);
	//&s->pArr[(s->tos)++] -> dereference error
	memcpy((unsigned char*)q->pArr+((q->rear) * (q->element_size)), pData,q->element_size);
	(q->rear)++;
	//int a ; a++ = 4byte 
	//double b; b++ = 8byte
	//void c; c++ = 1byte
}

void pop(queue_t* q, void* pData)
{
	assert( q->rear != q->front );
	//memcpy(pData,&s->pArr[--(s->tos)],s->element_size);
	memcpy(pData,(unsigned char*)q->pArr+((q->front)*(q->element_size)),q->element_size);
	(q->front)++;
}
