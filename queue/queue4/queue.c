#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void initQueue(queue_t* q, int size)
{
	q -> pArr = (int*) malloc(sizeof(int)*size);
	assert( q->pArr );

	q -> size = size;
	q -> front =0;
	q -> rear = 0;

}

void cleanupQueue(queue_t* q)
{
	free( q->pArr );
}

void push(queue_t* q,int data)
{
	assert( q -> rear != q->size);	
	q->pArr[(q->rear)++] = data;
}

int pop(queue_t* q)
{
	assert( q->rear != q->front );
	return q->pArr[(q->front)++];
}
