#include <stdio.h>

typedef struct Node {
	struct Node* next;
	struct Node* prev;
	void * data;
	void * ptr_deconstruct;
} Node;


Node * create_node(void * in_data, void * in_ptr_deconstruct)
{
	//Allocate memory, check for error
	Node * ptr_node = calloc(1, sizeof(Node));
	if (ptr_node == NULL) {
		fprintf(stderr, "calloc failed for Node object\n");
		return((Node*)-1);
	}

	//The pointer argument should already have its memory allocated
	ptr_node->data = in_data;
	ptr_node->ptr_deconstruct = in_ptr_deconstruct;
	return ptr_node;
}
/*
//Let's start with a basic function which we will be pointing to:

int addInt(int n, int m) {
    return n+m;
}
First thing, lets define a pointer to a function which receives 2 ints and returns and int:

int (*functionPtr)(int,int);
Now we can safely point to our function:

functionPtr = &addInt;
Now that we have a pointer to the function, lets use it:

int sum = (*functionPtr)(2, 3); // sum == 5
Passing the pointer to another function is basically the same:

int add2to3(int (*functionPtr)(int, int)) {
    return (*functionPtr)(2, 3);
}

*/
void destroy_node(Node * in_node)
{
	//in_node->ptr_deconstruct(in_node);
	
}
