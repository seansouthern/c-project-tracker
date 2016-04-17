#include "story.c"
typedef struct {
	Story * story;
	// Undo/redo command structures will be in Card type
} Card;

char * get_card_title(Card * in_card)
{
	return get_story_title(in_card->story);
}

void set_card_title(Card * in_card, char * in_title)
{
	set_story_title(in_card->story, in_title);
}
char * get_card_description(Card * in_card)
{
	return get_story_description(in_card->story);
}
void set_card_description(Card * in_card, char * in_description)
{
	set_story_description(in_card->story, in_description);
}
