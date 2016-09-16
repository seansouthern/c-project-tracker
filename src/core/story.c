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

Story * story_create()
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
	
	return ptr_story;
}

void story_destroy(Story * in_story)
{
	free(in_story);
}

char * story_get_title(Story * in_story)
{
	return in_story->title;
}

void story_set_title(Story * in_story, char * in_title)
{
	in_story->title = in_title;
}

char * story_get_description(Story * in_story)
{
	return in_story->description;
}

void story_set_description(Story * in_story, char * in_description)
{
	in_story->description = in_description;
}

int story_get_points(Story * in_story)
{
	return in_story->points;
}

void story_set_points(Story * in_story, int in_points)
{
	in_story->points = in_points;
}

time_t story_get_time_created(Story * in_story)
{
	return in_story->time_created;
}
