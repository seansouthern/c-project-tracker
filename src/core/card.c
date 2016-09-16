#ifndef CARD_INC
#include "card.h"
#endif

char * card_get_title(Card * in_card)
{
	return story_get_title(in_card->story);
}
void card_set_title(Card * in_card, char * in_title)
{
	story_set_title(in_card->story, in_title);
}
char * card_get_description(Card * in_card)
{
	return story_get_description(in_card->story);
}
void card_set_description(Card * in_card, char * in_description)
{
	story_set_description(in_card->story, in_description);
}
void card_destroy(Card * in_card)
{
	story_destroy(in_card->story);
	free(in_card);
}

//Takes Board arg, cards must belong to a board
Card * card_create( void )
{
	//Allocated memory and initializes story
	Story * ptr_story = story_create();
	//Allocate memory for Card and error checking
	Card * ptr_card = calloc(1, sizeof(Card));
	if (NULL == ptr_card) {
		fprintf(stderr, "calloc failed for Card object\n");
		return((Card *)-1);
	}

	ptr_card->story = ptr_story;

	return ptr_card;
}
