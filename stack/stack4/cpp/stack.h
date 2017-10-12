#ifndef STACK_H
#define STACK_H

class Stack{
	private:			//information hiding
		int* pArr;
		int  tos;
		int  size;
	public:
		Stack(int size);	//void initStack(int size);	
		~Stack();		//void cleanupStack();
		void push(int data);
		int pop();
};

#endif
