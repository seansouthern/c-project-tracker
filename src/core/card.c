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

void card_destroy_story(Card * in_card)
{
	free(in_card->story);
}


Story * card_create_story(Card * in_card)
{
	//Allocate memory, check for error
	Story * ptr_story = calloc(1, sizeof(Story));
	if (NULL == ptr_story) {
		fprintf(stderr, "calloc failed for Story object\n");
		return((Story *)-1);
	}
	
	//Initialize to empty values
	ptr_story->title =  '\0';
	ptr_story->description = '\0';
	ptr_story->time_created =  time(NULL);
	ptr_story->points = 0;

	in_card->story = ptr_story;
	
	return ptr_story;
}



