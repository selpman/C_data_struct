#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void initList(list_t *pList)
{
	pList->ptr = malloc(sizeof(list_t));
	pList->ptr->next = NULL;
}
void cleanupList(list_t *pList)
{
	node_t *ptr = pList->ptr;
	while(ptr)
	{
		node_t *tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	pList->ptr = NULL;
}
void printList(const list_t *pList)
{
	node_t *ptr;
	if(pList->ptr)
		ptr = pList->ptr->next;
	else
		ptr = NULL;

	while(ptr)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

void insertFirstNode(list_t *pList, int data)
{
	node_t *tmp = malloc(sizeof(node_t));
	tmp->data = data;
	tmp->next = pList->ptr->next;
	pList->ptr->next = tmp;
}
void insertNode(list_t *pList, int prevData, int data)
{
	node_t *ptr = pList->ptr->next;
	while(ptr)
	{
		if(ptr->data == prevData)
			break;
		ptr = ptr->next;
	}
	if(ptr)
	{
		node_t *tmp = malloc(sizeof(node_t));
		tmp->data = data;
		tmp->next = ptr->next;
		ptr->next = tmp;
	}
}
void deleteNode(list_t *pList, int data)
{
	node_t *ptr1 = pList->ptr->next;
	node_t *ptr2 = pList->ptr;

	while(ptr1)
	{
		if(ptr1->data == data)
			break;
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}

	if(ptr1)
	{
		ptr2->next = ptr1->next;
		free(ptr1);
	}
}
