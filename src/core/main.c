#include "linkedlist.h"
#include "story.c"
#include "project.c"
#include "board.c"
#include "card.c"
#include "application.c"


void start_application(void)
{
	char * project_name = "Project Name";
	Project * project = create_project(project_name);
	if(project == NULL){
		printf("project is NULL!");
	}
	else{
		printf("%p is project pointer", project);
		
		Board * board = create_board(project);
		Card * card = create_card(board);

		printf("\n%s is old title\n", get_title(card->story));
	
		char * title = "Some new title";
		set_title(card->story, title);

		printf("\n%s is new title\n", get_title(card->story));

		//Free all the memory
		destroy_project(project);
	}
	return;
}



