#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100

typedef struct {
	int array[QUEUE_SIZE];
	int rear;
	int front;
} queue_t;

void initQueue(queue_t* q);
void push(queue_t* q, int data);
int pop(queue_t* q);

#endif
