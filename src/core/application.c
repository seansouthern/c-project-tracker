#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif

#ifndef NODE_INC
#include "node.h"
#endif

#ifndef APPLICATION_INC
#include "application.h"
#endif


Application * application_init()
{
	Application * app = calloc(1, sizeof(Application));
	app->projects = list_create();
	return app;
}

void application_destructor(Application * in_app)
{
	application_destroy_all_projects(in_app);
	free(in_app);
}

Project * application_create_project(Application * in_app, char * in_name, char * in_description)
{

	Project * ptr_project = calloc(1, sizeof(Project));
     
	unsigned long proj=(unsigned long)ptr_project;
        if ( ptr_project == NULL) {
		fprintf(stderr, "calloc failed for Project object\n");
		return((Project *)-1);
	}
	ptr_project->boards = list_create();
	ptr_project->name = in_name;
	ptr_project->description = in_description; 

	//Inform it of its place in the list
	//ptr_project->list_node = list_create_node(ptr_project);
	Node * ptr_project_node = list_create_node(ptr_project);
	// Stuff user data into node and add it to beginning of LL
	list_insert_node(in_app->projects, ptr_project_node);

        return ptr_project;
}


int destroy_project(Application * in_app, char * in_proj_name)
{
	//traverse(in_app->projects, );
	return 0;
}

int application_destroy_project(LinkedList * in_projects, Node * in_project_node)
{
        // Iterates through boards destroying,then destroys the project struct
	project_destroy_all_boards(in_project_node->data);
	free(in_project_node->data);
	return 0;
}
	
void application_destroy_all_projects(Application * in_app)
{
        list_destroy(in_app->projects, application_destroy_project);
}

Project * project_open(char * in_filename)
{

	Project * opened_project = calloc(1, sizeof(Project));
	if ( opened_project == NULL) {
		fprintf(stderr, "calloc failed for new Project object in open_project\n");
		return((Project *)-1);
	}

	FILE * file = fopen(in_filename, "rb");
	if (file != NULL) {
		fread(opened_project, sizeof(Project), 1, file);
		fclose(file);
	}

	return opened_project;
}

void project_save(Project * in_project, char * in_filename)
{
	FILE * save_file = fopen(in_filename, "wb");
	if(save_file!= NULL){
		fwrite(in_project, sizeof(in_project), 1, save_file);
		fclose(save_file);
	}
	return;
}

void project_delete(char * in_filename)
{
	int ret;
	ret = remove(in_filename);
	if(ret == 0){
		printf("File deleted successfully");
	}
	else{
		printf("Error: unable to delete the project file");
	}
	return;
}
