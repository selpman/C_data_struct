#include <iostream>
#include "stack.h"

int main()
{
	Stack s1(10), s2(100);

	//s1.initStack(10);
	//s1.initStack(100);

	s1.push(100);
	s1.push(200);
	s1.push(300);

	s2.push(900);
	s2.push(800);
	s2.push(700);
	
	/*
	printf("s1 1st pop : %d \n",s1.pop());
	printf("s1 2nd pop : %d \n",s1.pop());
	printf("s1 3rd pop : %d \n",s1.pop());

	printf("s2 1st pop : %d \n",s2.pop());
	printf("s2 2nd pop : %d \n",s2.pop());
	printf("s2 3rd pop : %d \n",s2.pop());
	*/
	
	std::cout << "s1 1st pop() : " << s1.pop() << std::endl;
	std::cout << "s1 2nd pop() : " << s1.pop() << std::endl;
	std::cout << "s1 3rd pop() : " << s1.pop() << std::endl;

	std::cout << "s2 1st pop() : " << s2.pop() << std::endl;
	std::cout << "s2 2nd pop() : " << s2.pop() << std::endl;
	std::cout << "s2 3rd pop() : " << s2.pop() << std::endl;

	//auto destruct.
	//s1.cleanupStack();
	//s2.cleanupStack();

	return 0;
}
