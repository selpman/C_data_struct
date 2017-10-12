#include "stack.h"

static int stack[100];
static int tos; //top of stack

void push(int data)
{
	stack[tos++]=data;
}

int pop(void)
{
	return stack[--tos];
}
