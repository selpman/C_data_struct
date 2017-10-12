#ifndef STACK_H
#define STACK_H

typedef struct {
	int* pArr;
	int  tos;
	int  size;
} stack_t;

void initStack(stack_t* s, int size);
void cleanupStack(stack_t* s);
void push(stack_t* s, int data);
int pop(stack_t* s);

#endif
