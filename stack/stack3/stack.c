#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void initStack(stack_t* s)
{
	s -> tos = 0;
}

void push(stack_t* s,int data)
{
	if(s->tos == STACK_SIZE)
	{
		fprintf(stderr,"stack is full\n");
		exit(-1);
	}
	
	s->array[(s->tos)++] = data;
}

int pop(stack_t* s)
{
	if(s->tos == 0 )
	{
		fprintf(stderr,"stack is empty\n");
		exit(-2);
	}

	return s->array[--(s->tos)];
}
