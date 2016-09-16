#ifndef STORY_INC
#include "story.h"
#endif


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
