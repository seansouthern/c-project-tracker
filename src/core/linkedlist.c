#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif

void list_insert_node(LinkedList * list, Node * node)
{
	node->next = list->head;
	if(list->head != NULL){
		list->head->prev = node;
	}
	list->head = node;
	node->prev = NULL;
        
}

int list_delete_node(LinkedList * list, Node * node)
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
	free(node);
	return 0;
}

LinkedList * list_create()
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





int traverse(LinkedList * in_list, int (*ptr_func)(LinkedList * l, Node * n))
{
	Node * x = list_get_head(in_list);
	while(x != NULL){
		ptr_func(in_list, x);
		x = x->next;
	}
	return 0;
}

Node * list_get_head(LinkedList * in_list)
{
	return in_list->head;
}

Node * list_get_tail(LinkedList * in_list)
{
	return in_list->tail;
}

void list_destroy(LinkedList * in_list)
{
        traverse(in_list,list_delete_node);
	free(in_list);
}
