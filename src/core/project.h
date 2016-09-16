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
} Project;

typedef struct {
	char * name;
	char * description;

} ProjectAttributes;


void project_delete_board(Board * in_board);
Board * project_create_board(Project * in_project);
char * project_get_name(Project * in_project);
void project_set_name(Project * in_project, char * in_name);
char * project_get_description(Project * in_project);
void project_set_description(Project * in_project, char * in_description);

#include "project.c"
