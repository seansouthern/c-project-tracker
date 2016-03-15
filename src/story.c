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


Story * create_story()
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

void destroy_story(Story * in_story)
{
	free(in_story);
}

char * get_title(Story * in_story)
{
	return in_story->title;
}

void set_title(Story * in_story, char * in_title)
{
	in_story->title = in_title;
}

char * get_description(Story * in_story)
{
	return in_story->description;
}

void set_description(Story * in_story, char * in_description)
{
	in_story->description = in_description;
}

int get_points(Story * in_story)
{
	return in_story->points;
}

void set_points(Story * in_story, int in_points)
{
	in_story->points = in_points;
}

time_t get_time_created(Story * in_story)
{
	return in_story->time_created;
}
