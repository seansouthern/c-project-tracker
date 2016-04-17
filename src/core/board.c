#include "card.c"
#include "linkedlist.h"

typedef struct {
	char * name;
	LinkedList * cards;
} Board;


char * get_board_name(Board * in_board)
{
	return in_board->name;
}

void set_board_name(Board * in_board, char * in_name)
{
	in_board->name = in_name;
}


void destroy_card(Card * in_card)
{
	destroy_story(in_card->story);
	free(in_card);
}

//Takes Board arg, cards must belong to a board
Card * create_card(Board * in_board)
{
	//Allocated memory and initializes story
	Story * ptr_story = create_story();
	//Allocate memory for Card and error checking
	Card * ptr_card = calloc(1, sizeof(Card));
	if (NULL == ptr_card) {
		fprintf(stderr, "calloc failed for Card object\n");
		return((Card *)-1);
	}

	ptr_card->story = ptr_story;

	//Cards must belong to a Board
	Node * ptr_card_node = create_node(ptr_card);	
	insert_node(in_board->cards, ptr_card_node);
	return ptr_card;
}
