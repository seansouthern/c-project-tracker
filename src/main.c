#include "linkedlist.h"
#include "story.c"
#include "project.c"
#include "board.c"

#include "card.c"

#include "application.c"

#include <windows.h>


int main(void)
{
	char * project_name = "Project Name";
	Project * project = create_project(project_name);
	if(project == NULL){
		printf("project is NULL!");
	}
	else{ printf("%p is project pointer", project);
		
	Board * board = create_board(project);
	Card * card = create_card(board);

	printf("\n%s is the old title\n", get_title(card->story));
	
	char * title = "Some new title";
	set_title(card->story, title);

	printf("\n%s is the new title\n", get_title(card->story));

	//Free all the memory

		Sleep( 4000);
	      destroy_project(project);
	}
	return 0;
}



	//printf("%s is the title\n", get_title(new_story));
	//printf("%s is the description\n", get_description(new_story));
	//printf("%d is the points\n", get_points(new_story));
	
	//set_title(new_story, "New Story");
	//set_description(new_story, "The description");
	//set_points(new_story, 3);

	//printf("%s is the new description\n", get_description(new_story));
	//printf("%d is the new points\n", get_points(new_story));
	//printf("%s is the time created", get_time_created(new_story));
