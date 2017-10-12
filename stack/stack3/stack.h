#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100

typedef struct {
	int array[STACK_SIZE];
	int tos;
} stack_t;

void initStack(stack_t* s);
void push(stack_t* s, int data);
int pop(stack_t* s);

#endif
