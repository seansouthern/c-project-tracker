
typedef struct {
	char * name;
	LinkedList * cards;
} Board;


void destroy_board(Board * in_board)
{
	destroy_list(in_board->cards);
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
	Node * ptr_board_node = create_node(ptr_board, &destroy_board);
	insert_node(in_project->boards, ptr_board_node);
	return ptr_board;
}



char * get_board_name(Board * in_board)
{
	return in_board->name;
}

void set_board_name(Board * in_board, char * in_name)
{
	in_board->name = in_name;
}

