#include <stdio.h>
#include "stack.h"

int main(void)
{
	stack_t s1, s2;

	initStack(&s1,10,sizeof(int));
	initStack(&s2,100,sizeof(double));

	int i=100;
	push(&s1,&i);
	i=200;
	push(&s1,&i);
	i=300;
	push(&s1,&i);

	double j = 900.9;
	push(&s2,&j);
	j=800.8;
	push(&s2,&j);
	j=700.7;
	push(&s2,&j);
	
	pop(&s1,&i);
	printf("s1 1st pop : %d \n",i);
	pop(&s1,&i);
	printf("s1 2nd pop : %d \n",i);
	pop(&s1,&i);
	printf("s1 3rd pop : %d \n",i);

	pop(&s2,&j);
	printf("s2 1st pop : %f \n",j);
	pop(&s2,&j);
	printf("s2 2nd pop : %f \n",j);
	pop(&s2,&j);
	printf("s2 3rd pop : %f \n",j);
	
	cleanupStack(&s1);
	cleanupStack(&s2);

	return 0;
}
