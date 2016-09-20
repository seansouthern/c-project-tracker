#define CARD_INC

#ifndef STORY_INC
#include "story.h"
#endif

#ifndef NODE_INC
#include "node.h"
#endif

typedef struct {
	Story * story;
	Node * card_node;
	// Undo/redo command structures will be in Card type
} Card;

typedef struct {
	

} CardAttributes;

char * card_get_title(Card * in_card);
void card_set_title(Card * in_card, char * in_title);
char * card_get_description(Card * in_card);
void card_set_description(Card * in_card, char * in_description);
Story * card_create_story( void );
void card_destroy_story(Card * in_card);

#include "card.c"
