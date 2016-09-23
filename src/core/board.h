#define BOARD_INC

#ifndef CARD_INC
#include "card.h"
#endif

#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif


typedef struct {
	char * name;
	char * description;
	LinkedList * cards;
//	Node * board_node;
} Board;

typedef struct {
	char * name;
	char * description;

} BoardAttributes;



int board_destroy_card(LinkedList * in_list, Node * in_node);
Card * board_create_card( Board * in_board );
void board_destroy_all_cards(Board * in_board);
char * board_get_name(Board * in_board);
void board_set_name(Board * in_board, char * in_name);
char * board_get_description(Board * in_board);
void board_set_description(Board * in_board, char * in_description);

#include "board.c"
