#include "board.h"


void board_destroy(Board * in_board)
{
	Node * head = in_board->cards->head;
	if(head != NULL){
		do{
			card_destroy(head->data);
			free(head);
		}while(head->next != NULL);   
	}
	else{
		printf("\nError:Tried to free empty list in destroy_board");
	}
	free(in_board);
}

Board * board_create()
{
	//Allocate memory, check for error
	Board * ptr_board = calloc(1, sizeof(Board));
	if (NULL == ptr_board) {
		fprintf(stderr, "calloc failed for Board object\n");
		return((Board *)-1);
	}

	ptr_board->name = '\0';
	ptr_board->cards = list_create();

	return ptr_board;
}



char * board_get_name(Board * in_board)
{
	return in_board->name;
}
void board_set_name(Board * in_board, char * in_name)
{
	in_board->name = in_name;
}
char * board_get_description(Board * in_board)
{
	return in_board->description;
}
void board_set_description(Board * in_board, char * in_description)
{
	in_board->description = in_description;
}
