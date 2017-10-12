#include <stdio.h>
#include "queue.h"

int main(void)
{
	queue_t q1, q2;

	initQueue(&q1,10,sizeof(int));
	initQueue(&q2,100,sizeof(double));

	int i=100;
	push(&q1,&i);
	i=200;
	push(&q1,&i);
	i=300;
	push(&q1,&i);

	double j = 900.9;
	push(&q2,&j);
	j=800.8;
	push(&q2,&j);
	j=700.7;
	push(&q2,&j);
	
	pop(&q1,&i);
	printf("q1 1st pop : %d \n",i);
	pop(&q1,&i);
	printf("q1 2nd pop : %d \n",i);
	pop(&q1,&i);
	printf("q1 3rd pop : %d \n",i);

	pop(&q2,&j);
	printf("s2 1st pop : %f \n",j);
	pop(&q2,&j);
	printf("s2 2nd pop : %f \n",j);
	pop(&q2,&j);
	printf("s2 3rd pop : %f \n",j);
	
	cleanupQueue(&q1);
	cleanupQueue(&q2);

	return 0;
}
