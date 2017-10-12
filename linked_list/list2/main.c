#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
	list_t list;
	initList(&list);

	insertFirstNode(&list,10);
	insertNode(&list,10,40);
	insertNode(&list,10,30);
	insertNode(&list,10,20);
	printList(&list);	// { 10, 20, 30, 40}
	
	deleteNode(&list, 30);
	printList(&list);

	cleanupList(&list);
	printList(&list);

	return 0;
}
