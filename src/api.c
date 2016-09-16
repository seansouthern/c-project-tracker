#include "core/application.c"

//Method declarations used by Interface front ends for manipulating 
// data model

//Application level functions
void application_start();
void application_quit();
Project * application_create_project(LinkedList * in_projects, ProjectAttributes * in_attributes);
Project * application_open_project(char * in_filename);
void application_save_project(Project * in_project, char * in_filename);
void application_delete_project(char * in_filename);

// Project level functions
Board * project_create_board(Project * in_project);
void project_delete_board(Board * in_board);
char * project_get_name(Project * in_project);
void project_set_name(Project * in_project, char * in_name);
char * project_get_description(Project * in_project);
void project_set_description(Project * in_project, char * in_description);


// Board level functions
void board_add_card(Board * in_board);
void board_delete_card(Board * in_board, Card * in_card);
void board_swap_card(Board * source_board, Board * dest_board, Card * in_card);
char * board_get_title(Board * in_board);
void board_set_title(Board * in_board, char * in_title);
char * board_get_description(Board * in_board);
void board_set_description(Board * in_board, char * in_description);

// Card level functions
Story * card_create_story(Card * in_card);
char * card_get_title(Card * in_card);
void card_set_title(Card * in_card, char * in_title);
char * card_get_description(Card * in_card);
void card_set_description(Card * in_card, char * in_description);
int card_get_points(Card * in_card);
void card_set_points(Card * in_card, int in_points);

