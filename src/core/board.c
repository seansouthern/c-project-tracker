#ifndef BOARD_INC
#include "board.h"
#endif

#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif


Card * board_create_card( Board * in_board )
{
	//Allocate memory for Card and error checking
	Card * ptr_card = calloc(1, sizeof(Card));
	if (NULL == ptr_card) {
		fprintf(stderr, "calloc failed for Card object\n");
		return((Card *)-1);
	}
	
	ptr_card->story = card_create_story();

	return ptr_card;
}


int board_destroy_card(LinkedList * in_list, Node * in_node)
{
	Card * in_card = in_node->data; 
	card_destroy_story(in_card);
	free(in_card);
	return 0;
}

void board_destroy_all_cards(Board * in_board)
{
        list_destroy(in_board->cards, board_destroy_card);
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
