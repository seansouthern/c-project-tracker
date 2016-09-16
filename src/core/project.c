#include "project.h"

void project_delete_board(Board * in_board)
{
	board_destroy(in_board);
}
Board * project_create_board(Project * in_project)
{
	Board * board_ptr = board_create();

	//Boards must belong to a Project
	Node * ptr_board_node = node_create(board_ptr);
	list_insert_node(in_project->boards, ptr_board_node);

	return board_ptr;
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
