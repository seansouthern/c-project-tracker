#include "core/application.c"

//Method declarations used by Interface front ends for manipulating 
// data model

//Application level functions
void start_application();
void quit_application();
Project * create_project(LinkedList * in_projects, char * in_name,
			 char * in_description);
Project * open_project(char * in_filename);
void save_project(Project * in_project, char * in_filename);
void delete_project(char * filename);

// Project level functions
Board * create_board(Project * in_project);
void destroy_board(Board * in_board);
char * get_project_name(Project * in_project);
void set_project_name(Project * in_project, char * in_name);
char * get_project_description(Project * in_project);
void set_project_description(Project * in_project, char * in_description);

// Board level functions
Card * create_card(Board * in_board);
void destroy_card(Card * in_card);
void add_card(Board * in_board);
void remove_card(Board * in_board, Card * in_card);
void swap_card(Board * source_board, Board * dest_board, Card * in_card);
char * get_board_title(Board * in_board);
void set_board_title(Board * in_board, char * in_title);
char * get_board_description(Board * in_board);
void set_board_description(Board * in_board, char * in_description);

// Card level functions
Story * create_story();
char * get_card_title(Card * in_card);
void set_card_title(Card * in_card, char * in_title);
char * get_card_description(Card * in_card);
void set_card_description(Card * in_card, char * in_description);
int get_points(Story * in_story);
void set_points(Story * in_story, int in_points);

