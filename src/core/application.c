#include "project.c"

typedef struct {
	LinkedList * projects; 
} Application;


void start_application()
{
	//Perform any initialization

}

void quit_application()
{
	//Perform any destruction 

}


Project * create_project(LinkedList * in_projects, char * in_name,
			 char * in_description)
{
	//Allocated memory and initializes project
	Project * ptr_project = calloc(1, sizeof(Project));
	if ( ptr_project == NULL) {
		fprintf(stderr, "calloc failed for Project object\n");
		return((Project *)-1);
	}
	ptr_project->boards = create_list();
	ptr_project->name = in_name;
	ptr_project->description = in_description; 

	insert_node(in_projects,create_node(ptr_project));
	return ptr_project;
}


void destroy_project(Project * in_project)
{
	Node * head = in_project->boards->head;
	if(head != NULL){
		do{
			destroy_board(head->data);
			free(head);
		}while (head->next != NULL);
	}
	else{
		printf("\nError:Tried to free empty list in destroy_project");
	}
	free(in_project);
}
	


Project * open_project(char * in_filename)
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

void save_project(Project * in_project, char * in_filename)
{
	FILE * save_file = fopen(in_filename, "wb");
	if(save_file!= NULL){
		fwrite(in_project, sizeof(in_project), 1, save_file);
		fclose(save_file);
	}
	return;
}

void delete_project(char * in_filename)
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
