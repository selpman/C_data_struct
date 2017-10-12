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
	assert( (q->rear + 1) % q->size != q->front);	
	memcpy((unsigned char*)q->pArr+((q->rear) * (q->element_size)), pData,q->element_size);
	q->rear = ( q->rear + 1) % q->size;
}

void pop(queue_t* q, void* pData)
{
	assert( q->rear != q->front );
	memcpy(pData,(unsigned char*)q->pArr+((q->front)*(q->element_size)),q->element_size);
	q->front = (q->front + 1) % q->size;
}
