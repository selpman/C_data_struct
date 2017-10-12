#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initList(list_t *pList, int element_size)
{
	pList->ptr = malloc(sizeof(list_t));
	pList->ptr->next = NULL;
	pList->element_size = element_size;
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
void printList(const list_t *pList, void (*print)(const void*))
{
	node_t *ptr;
	if(pList->ptr)
		ptr = pList->ptr->next;
	else
		ptr = NULL;

	while(ptr)
	{
		print(ptr+1);
		printf(" ");
		ptr = ptr->next;
	}
	printf("\n");
}

void insertFirstNode(list_t *pList, const void *pData)
{
	node_t *tmp = malloc(sizeof(node_t)+pList->element_size);

	memcpy(tmp +1 ,pData,pList->element_size);
	tmp->next = pList->ptr->next;
	pList->ptr->next = tmp;
}
void insertNode(list_t *pList, const void *pPrevData, const void *pData)
{
	node_t *ptr = pList->ptr->next;
	while(ptr)
	{
		if(memcmp(ptr+1,pPrevData,pList->element_size) == 0)
			break;
		ptr = ptr->next;
	}
	if(ptr)
	{
		node_t *tmp = malloc(sizeof(node_t));
		memcpy(tmp+1,pData,pList->element_size);
		tmp->next = ptr->next;
		ptr->next = tmp;
	}
}
void deleteNode(list_t *pList, const void *pData)
{
	node_t *ptr1 = pList->ptr->next;
	node_t *ptr2 = pList->ptr;

	while(ptr1)
	{
		if(memcmp(ptr1 + 1, pData, pList->element_size) == 0)
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
