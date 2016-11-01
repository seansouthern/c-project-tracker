#define PROJECT_INC

#ifndef BOARD_INC
#include "board.h"
#endif

#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif

typedef struct {
	char * name;
	char * description;
	LinkedList * boards;
	Node * list_node;
} Project;

typedef struct {
	char * name;
	char * description;
	int iteration_length;

} ProjectAttributes;


int project_destroy_board(LinkedList * in_board, Node * in_board_node);
Board * project_create_board(Project * in_project);
char * project_get_name(Project * in_project);
void project_set_name(Project * in_project, char * in_name);
char * project_get_description(Project * in_project);
void project_set_description(Project * in_project, char * in_description);

#include "project.c"
