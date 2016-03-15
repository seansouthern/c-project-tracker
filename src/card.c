
typedef struct {
	Story * story;
	// Undo/redo command structures will be in Card type
} Card;

void destroy_card(Card * in_card)
{
	//Free allocated memory
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
	void (*destruct_func)(Card *);
	destruct_func = &destroy_card;
	Node * ptr_card_node = create_node(ptr_card, destruct_func);	
	insert_node(in_board->cards, ptr_card_node);
	return ptr_card;
}



/*
Board * get_board(Card * in_card)
{
	return in_card->owner_board;
}

void set_board(Card * in_card, Board * in_board)
{
	in_card->owner_board = in_board;
}
*/
