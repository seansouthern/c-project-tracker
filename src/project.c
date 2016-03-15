
typedef struct {
	char * name;
	LinkedList * boards;
} Project;


Project * create_project(char * in_name)
{
	//Allocated memory and initializes project
	Project * ptr_project = calloc(1, sizeof(Project));
	if ( ptr_project == NULL) {
		fprintf(stderr, "calloc failed for Project object\n");
		return((Project *)-1);
	}
	ptr_project->boards = create_list();
	ptr_project->name = in_name;
	return ptr_project;
}


//This will recursively destroy all contained objects 
void destroy_project(Project * in_project)
{
	if(in_project != NULL){
		if(in_project->boards != NULL){
			destroy_list(in_project->boards);
		}
		else{
			printf("\nboards isnt init so it crashes on destroy_list\n");
		}
		free(in_project);
	}
}




char * get_name(Project * in_project)
{
	return in_project->name;
}

void set_name(Project * in_project, char * in_name)
{
	in_project->name = in_name;
}

