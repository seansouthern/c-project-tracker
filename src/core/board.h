#define BOARD_INC

#ifndef CARD_INC
#include "card.c"
#endif

#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif


typedef struct {
	char * name;
	char * description;
	LinkedList * cards;
} Board;

typedef struct {
	char * name;
	char * description;

} BoardAttributes;


void board_destroy(Board * in_board);
Board * board_create( void );
char * board_get_name(Board * in_board);
void board_set_name(Board * in_board, char * in_name);
char * board_get_description(Board * in_board);
void board_set_description(Board * in_board, char * in_description);
