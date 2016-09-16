#define PROJECT_INC

#ifndef BOARD_INC
#include "board.c"
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

void project_delete_board(Board * in_board)
{
	board_destroy(in_board);
}
Board * project_create_board(Project * in_project)//, BoardAttributes * in_board_attributes)
{
	Board * board_ptr = board_create(in_project);

	//Boards must belong to a Project
	Node * ptr_board_node = node_create(board_ptr);
	list_insert_node(in_project->boards, ptr_board_node);
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
