#include "board.c"

typedef struct {
	char * name;
	char * description;
	LinkedList * boards;
} Project;

void destroy_board(Board * in_board)
{
	Node * head = in_board->cards->head;
	if(head != NULL){
		do{
			destroy_card(head->data);
			free(head);
		}while(head->next != NULL);   
	}
	else{
		printf("\nError:Tried to free empty list in destroy_board");
	}
	free(in_board);
}


		


Board * create_board(Project * in_project)
{
	//Allocate memory, check for error
	Board * ptr_board = calloc(1, sizeof(Board));
	if (NULL == ptr_board) {
		fprintf(stderr, "calloc failed for Board object\n");
		return((Board *)-1);
	}

	ptr_board->name = '\0';
	ptr_board->cards = create_list();

	//Boards must belong to a Project
	Node * ptr_board_node = create_node(ptr_board);
	insert_node(in_project->boards, ptr_board_node);
	return ptr_board;
}

char * get_project_name(Project * in_project)
{
	return in_project->name;
}

void set_project_name(Project * in_project, char * in_name)
{
	in_project->name = in_name;
}

char * get_project_description(Project * in_project)
{
	return in_project->description;
}

void set_project_description(Project * in_project, char * in_description)
{
	in_project->description = in_description;
}
