#ifndef TEST_COMMON_INC
#include "test_common.h"
#endif

#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
//#include <sys/syscall.h>
#include <string.h>
#include <ctype.h>

FILE * scan_file;


LinkedList * scan_for_tests( void )
{
	LinkedList * valid_files = list_create();


	struct dirent **namelist;
	int n = scandir("../tests/", &namelist, NULL, alphasort);
	if (n < 0)
		perror("scandir");
	else {
		while (n--) {
			if(strlen(namelist[n]->d_name) > 2){	
				if(isalpha(namelist[n]->d_name[0])){
					int z  = 0;
					char term = namelist[n]->d_name[z];
					while( term != '\0'){
						z++;
						term = namelist[n]->d_name[z];
					}
					if(namelist[n]->d_name[z-1] == 'c' || namelist[n]->d_name[z-1] == 'h'){
						printf("%s\n", namelist[n]->d_name);
						list_insert_node(valid_files, list_create_node(namelist[n]->d_name));
					}
				}
			}
			free(namelist[n]);
		}
		free(namelist);
	}

	return valid_files;
}

int strip_extension(LinkedList * in_list, Node * in_node)
{	
	// Strip file extensions from the node's filename data to get the function name
	//
	//TODO
	//
	return 0;
}

LinkedList * strip_extensions(LinkedList * filenames)
{
	LinkedList * stripped_names = filenames;
	traverse(filenames, strip_extension);
        
	return stripped_names;
}


void set_scan_file(FILE * in_file)
{
	scan_file = in_file;
}

FILE * get_scan_file()
{
	return scan_file;
}

int format_test_includes(LinkedList * in_list, Node * in_node)
{
	char * filename = in_node->data;
	fprintf(get_scan_file(), "#include \"../tests/%s\"\n", filename);
	return 0;
}

void write_tests_list(LinkedList * in_files)
{
	set_scan_file(fopen("../scanned_tests.h", "w"));
	// Flush file before use
	if(get_scan_file() != NULL){		
		fclose(get_scan_file());
	
	}else{
		debug_log(FAILED,"Couldn't open scan file in w mode to clear it");
		return;
	}

	set_scan_file(fopen("../scanned_tests.h", "a"));
	
if(get_scan_file() != NULL){
	        traverse(in_files, format_test_includes);
        	fclose(get_scan_file());
        
	}
	else{
		debug_log(FAILED, "Unable to open scanned tests file for real use");
		return;
	}
	list_destroy(in_files, list_delete_node);
	return;
}
