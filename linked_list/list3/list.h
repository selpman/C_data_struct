#ifndef LIST_H
#define LIST_H

typedef struct node{
	struct node* next;
}node_t;

typedef struct {
	node_t *ptr;
	int element_size;
}list_t;

void initList(list_t *pListi, int element_size);
void cleanupList(list_t *pList);
void printList(const list_t *pList,void (*print)(const void*));

void insertFirstNode(list_t *pList, const void *pData);
void insertNode(list_t *pList, const void *pPrevData, const void *pData);
void deleteNode(list_t *pList, const void *pData);

#endif // end of list.h
