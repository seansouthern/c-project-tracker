#define CARD_INC

#ifndef STORY_INC
#include "story.h"
#endif

typedef struct {
	Story * story;
	// Undo/redo command structures will be in Card type
} Card;

typedef struct {
	

} CardAttributes;

char * card_get_title(Card * in_card);
void card_set_title(Card * in_card, char * in_title);
char * card_get_description(Card * in_card);
void card_set_description(Card * in_card, char * in_description);
void card_destroy(Card * in_card);
Card * card_create( void );
