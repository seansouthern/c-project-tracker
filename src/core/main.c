#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "application.h"

int main(int argc, char** argv)
{

       	Application * app = application_init();		   
	
	char * project_name = "Project Name";
	char * project_description = "Description of the project.";
	Project * project = application_create_project(app, project_name, project_description);
	if(project == NULL){
		printf("project is NULL!\n\n");
	}
	else{
		printf("%p is project pointer", project);
		
		Card * card = board_create_card(project_create_board(project));

		printf("\n%s is old title\n", card_get_title(card));
	
		char * title = "Some new title";
		card_set_title(card, title);

		printf("\n%s is new title\n", card_get_title(card));

		//Free all the memory
		application_destroy_project(project);
	}

	
	return 0;
}


