#define NODE_INC

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	struct Node* next;
	struct Node* prev;
	void * data;
} Node;

typedef void (*t_destructor)(Node*);

Node * node_create(void * in_data);

#include "node.c"
