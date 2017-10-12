#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
	void* pArr;
	int  element_size;
	int  rear;
	int front;
	int  size;
} queue_t;

void initQueue(queue_t* q, int size, int element_size);
void cleanupQueue(queue_t* q);
void push(queue_t* q, const void* pData);
void pop(queue_t* q, void* pData);

#endif
