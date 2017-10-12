#include "queue.h"
#include <cassert>

Queue::Queue(int size)
{
	//this-> pArr = (int*) malloc(sizeof(int)*size);
	this->pArr = new int[size];
	assert( this->pArr );

	this-> size = size;
	this-> front =0;
	this-> rear = 0;

}

Queue::~Queue()
{
	//free( this->pArr );
	delete [] this->pArr;
}

void Queue::push(int data)
{
	assert( this-> rear != this->size);	
	this->pArr[(this->rear)++] = data;
}

int Queue::pop()
{
	assert( this->rear != this->front );
	return this->pArr[(this->front)++];
}
