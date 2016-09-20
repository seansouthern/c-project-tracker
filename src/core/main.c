#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "application.h"

int main(int argc, char** argv)
{

	printf("Compiled.\n\n");
	char c = getchar();

	Application * app = application_init();
	application_destructor(app);

	Project * my_proj = application_create_project(app, "My proj", "This is my proj.");
	application_destroy_all_projects(app);

	printf("Work done.\n\n");
	c = getchar();

	
	return 0;
}


