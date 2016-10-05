
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "application.h"

void  test_function( void )
{

	Application * app = application_init();
/*	
	printf("About to application_create_project...\n");
	Project * my_proj = application_create_project(
		app, "My proj", "This is my proj.");
	Project * my_proj2 = application_create_project(
		app, "My proj", "This is my proj.");
	Project * my_proj3 = application_create_project(
		app, "My proj", "This is my proj.");
	Project * my_proj4 = application_create_project(
		app, "My proj", "This is my proj.");
	Board * my_board1 = project_create_board(my_proj);
	Board * my_board2 = project_create_board(my_proj);
	Board * my_board3 = project_create_board(my_proj);
	Board * my_board4 = project_create_board(my_proj);
	Board * my_board5 = project_create_board(my_proj);
	Card * my_carda1 = board_create_card(my_board1);
	Card * my_carda2 = board_create_card(my_board1);
	Card * my_carda3 = board_create_card(my_board1);
	Card * my_carda4 = board_create_card(my_board1);
	Card * my_carda5 = board_create_card(my_board2);
	Card * my_carda6 = board_create_card(my_board2);
	Card * my_carda7 = board_create_card(my_board2);
	Card * my_carda8 = board_create_card(my_board2);
	Card * my_carda9 = board_create_card(my_board3);
	Card * my_carda10 = board_create_card(my_board3);
	Card * my_carda11 = board_create_card(my_board4);
	Card * my_carda12 = board_create_card(my_board4);
	Card * my_carda13 = board_create_card(my_board5);
	Card * my_carda14 = board_create_card(my_board5);
	Card * my_carda15 = board_create_card(my_board5);
	Board * my_board21 = project_create_board(my_proj2);
	Board * my_board22 = project_create_board(my_proj2);
	Board * my_board23 = project_create_board(my_proj2);
	Board * my_board24 = project_create_board(my_proj2);
	Board * my_board25 = project_create_board(my_proj2);
        
	Card * my_cardb1 = board_create_card(my_board21);
	Card * my_cardb2 = board_create_card(my_board21);
	Card * my_cardb3 = board_create_card(my_board21);
	Card * my_cardb4 = board_create_card(my_board21);
	Card * my_cardb5 = board_create_card(my_board22);
	Card * my_cardb6 = board_create_card(my_board22);
	Card * my_cardb7 = board_create_card(my_board22);
	Card * my_cardb8 = board_create_card(my_board22);
	Card * my_cardb9 = board_create_card(my_board23);
	Card * my_cardb10 = board_create_card(my_board23);
	Card * my_cardb11 = board_create_card(my_board24);
	Card * my_cardb12 = board_create_card(my_board24);
	Card * my_cardb13 = board_create_card(my_board25);
	Card * my_cardb14 = board_create_card(my_board25);
	Card * my_cardb15 = board_create_card(my_board25);
        
*/
        application_destructor(app);

	
	return;
}


