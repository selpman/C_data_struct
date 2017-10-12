#ifndef STACK_H
#define STACK_H

typedef struct {
	void* pArr;
	int  element_size;
	int  tos;
	int  size;
} stack_t;

void initStack(stack_t* s, int size, int element_size);
void cleanupStack(stack_t* s);
void push(stack_t* s, const void* pData);
void pop(stack_t* s, void* pData);

#endif
