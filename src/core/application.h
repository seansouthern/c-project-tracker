#define APPLICATION_INC

#ifndef PROJECT_INC
#include "project.h"
#endif

#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif


typedef struct {
	LinkedList * projects; 
} Application;

typedef struct {
	time_t application_time_started;
	
} ApplicationAttributes;


Application * application_init( void );
Project * application_create_project(Application * in_app, char * in_name, char * in_description);
void application_destroy_project(Project * in_project);
Project * project_open(char * in_filename);
void project_save(Project * in_project, char * in_filename);
void project_delete(char * in_filename);

