#ifndef NODE_INC
#include "node.h"
#endif

Node * node_create(void * in_data)
{
	//Allocate memory, check for error
	Node * ptr_node = calloc(1, sizeof(Node));
	if (ptr_node == NULL) {
		fprintf(stderr, "calloc failed for Node object\n");
		return((Node*)-1);
	}

	//The pointer argument should already have its memory allocated
	ptr_node->data = in_data;

	return ptr_node;
}

// Destructors are defined for each data type in their respective files
