#include "node.h"

typedef struct  {
	Node * head;
	Node * tail;
	int size;
} LinkedList;


void insert_node(LinkedList * list, Node * node)
{
	node->next = list->head;
	if(list->head != NULL){
		list->head->prev = node;
	}
	list->head = node;
	node->prev = NULL;
        
}

void delete_node(LinkedList * list, Node * node)
{
        if(node->prev != NULL){
		node->prev->next = node->next;
	}
	else{
		list->head = node->next;
	}
	if(node->next != NULL){
		node->next->prev = node->prev;
	}
	
}

LinkedList * create_list()
{
	//Allocated memory and initializes list
	LinkedList * ptr_list = calloc(1, sizeof(LinkedList));
	if (NULL == ptr_list) {
		fprintf(stderr, "calloc failed for LinkedList object\n");
		return((LinkedList *)-1);
	}
	ptr_list->head = NULL;
	
	return ptr_list;
}


void destroy_list(LinkedList * in_list)
{
	Node * node = in_list->head;
	while(node->next != NULL){	
		//Node * next_node = node->next;
	        delete_node(in_list, node);
	}
	free(in_list);
}
