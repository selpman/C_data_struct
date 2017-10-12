#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

void initQueue(queue_t* q)
{
	q -> front = 0;
	q -> rear = 0;
}

void push(queue_t* q,int data)
{
	if(q->rear == QUEUE_SIZE)
	{
		fprintf(stderr,"queue is full\n");
		exit(-1);
	}
	
	q->array[(q->rear)++] = data;
}

int pop(queue_t* q)
{
	if(q->rear == q->front )
	{
		fprintf(stderr,"queue is empty\n");
		exit(-2);
	}

	return q->array[(q->front)++];
}
