#ifndef PROJECT_INC
#include "project.h"
#endif

#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif

int project_destroy_board(LinkedList * in_board, Node * in_board_node)
{
	printf("Entered project_destroy_board...\n");
	board_destroy_all_cards(in_board_node->data);
	free(in_board_node->data);
	return 0;	
}

void project_destroy_all_boards(Project * in_project)
{
	printf("Entered project_destroy_all_boards...\n");
	list_destroy(in_project->boards, project_destroy_board);
}

Board * project_create_board(Project * in_project)
{

	//Allocate memory, check for error
	Board * ptr_board = calloc(1, sizeof(Board));
	if (NULL == ptr_board) {
		fprintf(stdout, "calloc failed for Board object\n");
		return((Board *)-1);
	}

	ptr_board->name = '\0';
	ptr_board->cards = list_create();


	//Boards must belong to a Project
	Node * ptr_board_node = list_create_node(ptr_board);
	list_insert_node(in_project->boards, ptr_board_node);

	return ptr_board;
}

char * project_get_name(Project * in_project)
{
	return in_project->name;
}

void project_set_name(Project * in_project, char * in_name)
{
	in_project->name = in_name;
}

char * project_get_description(Project * in_project)
{
	return in_project->description;
}

void project_set_description(Project * in_project, char * in_description)
{
	in_project->description = in_description;
}
