#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void printInt(const void *pData)
{
	printf("%d",*(int*)pData);
}

void printDouble(const void *pData)
{
	printf("%f",*(double*)pData);
}

int main(void)
{
	list_t list1, list2;
	initList(&list1, sizeof(int));
	initList(&list2, sizeof(double));

	int i=10;		insertFirstNode(&list1,&i);
	int j = 40;		insertNode(&list1,&i,&j);
	j = 30;			insertNode(&list1,&i,&j);
	j = 20;			insertNode(&list1,&i,&j);
	printList(&list1,printInt);	// { 10, 20, 30, 40}
	
	double x=1.1;		insertFirstNode(&list2,&x);
	double y = 4.4;		insertNode(&list2,&x,&y);
	y = 3.3;		insertNode(&list2,&x,&y);
	y = 2.2;		insertNode(&list2,&x,&y);
	printList(&list2,printDouble);	// { 1.1, 2.2, 3.3, 4.4}

	j=30;
	deleteNode(&list1, &j);
	printList(&list1,printInt);

	y=3.3;
	deleteNode(&list2, &y);
	printList(&list2,printDouble);

	cleanupList(&list1);
	cleanupList(&list2);


	return 0;
}
