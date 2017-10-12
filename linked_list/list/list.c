#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node_t;

int main(void)
{
	node_t *ptr;
	ptr = (node_t*)malloc(sizeof(node_t));
	ptr->data = 10;
	ptr->next = (node_t*)malloc(sizeof(node_t));
	ptr->next->data = 20;
	ptr->next->next = (node_t*)malloc(sizeof(node_t));
	ptr->next->next->data = 30;
	ptr->next->next->next = NULL;

	//insert
	node_t *tmp;
	tmp = (node_t*)malloc(sizeof(node_t));
	tmp->data = 15;
	tmp->next = ptr->next;
	ptr->next = tmp;

	//remove
	//tmp = ptr->next->next;
	//ptr->next->next = tmp->next;
	//free(tmp);

	ptr->next->next->next=NULL;

	node_t *p = ptr;
	while(p)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	
	printf("\n");

	//list delect
	p=ptr;
	while(p)
	{
		tmp = p;
		p = p->next;
		free(tmp);
	}
	ptr = NULL;

	return 0;
}
