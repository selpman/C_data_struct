#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
	int* pArr;
	int  rear;
	int  front;
	int  size;
} queue_t;

void initQueue(queue_t* q, int size);
void cleanupQueue(queue_t* s);
void push(queue_t* s, int data);
int pop(queue_t* s);

#endif
