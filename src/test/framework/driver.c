#ifndef TEST_COMMON_INC
#include "test_common.h"
#endif

int main (int argc, char ** argv)
{

	
	printf("Going to run all tests...\n");
	run_all_tests(test_list);
	printf("Finished running all tests!\n");

	list_destroy(test_list, list_delete_node);
	char c = getchar();
	
	
}
