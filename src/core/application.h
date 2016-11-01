#define APPLICATION_INC

#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif

#ifndef PROJECT_INC
#include "project.h"
#endif



typedef struct {
	LinkedList * projects; 
} Application;

typedef struct {
	time_t application_time_started;	
} ApplicationAttributes;



Application * application_init( void );
Project * application_create_project(Application * in_app, char * in_name, char * in_description);
int  application_destroy_project(LinkedList * in_projects, Node * in_project_node);
void application_destroy_all_projects( Application * in_app );
void application_destructor(Application * in_app);

Project * project_open(char * in_filename);
void project_save(Project * in_project, char * in_filename);
void project_delete(char * in_filename);

#include "application.c"
