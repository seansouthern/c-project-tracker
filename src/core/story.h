#define STORY_INC

#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
	char * title;
	char * description;
	time_t time_created;
	int points;
} Story;


char * story_get_title(Story * in_story);
void story_set_title(Story * in_story, char * in_title);
char * story_get_description(Story * in_story);
void story_set_description(Story * in_story, char * in_description);
int story_get_points(Story * in_story);
void story_set_points(Story * in_story, int in_points);
time_t story_get_time_created(Story * in_story);

#include "story.c"
