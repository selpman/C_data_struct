#ifndef LIST_H
#define LIST_H

typedef struct node{
	int data;
	struct node* next;
}node_t;

typedef struct {
	node_t *ptr;
}list_t;

void initList(list_t *pList);
void cleanupList(list_t *pList);
void printList(const list_t *pList);

void insertFirstNode(list_t *pList, int data);
void insertNode(list_t *pList, int prevData, int data);
void deleteNode(list_t *pList, int data);

#endif // end of list.h
