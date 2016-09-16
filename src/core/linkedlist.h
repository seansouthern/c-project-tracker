#define LINKEDLIST_INC

#ifndef NODE_INC
#include "node.h"
#endif

typedef struct  {
	Node * head;
	Node * tail;
	int size;
} LinkedList;


void list_insert_node(LinkedList * in_list, Node * node);
int list_delete_node(LinkedList * in_list, Node * node);
LinkedList * list_create( void );
void list_destroy(LinkedList * in_list);
int traverse(LinkedList * in_list, int(*ptr_func)(LinkedList*, Node*));
Node * list_get_head(LinkedList * in_list);
Node * list_get_tail(LinkedList * in_list);

#include "linkedlist.c"
