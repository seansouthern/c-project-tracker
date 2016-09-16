#define LINKEDLIST_INC

#ifndef NODE_INC
#include "node.h"
#endif

typedef struct  {
	Node * head;
	Node * tail;
	int size;
} LinkedList;


void list_insert_node(LinkedList * list, Node * node);
void list_delete_node(LinkedList * list, Node * node);
LinkedList * list_create( void );
void list_destroy(LinkedList * in_list);
