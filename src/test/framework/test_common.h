#ifndef TEST_COMMON_INC
#define TEST_COMMON_INC
#endif

#include <stdio.h>
#include "linkedlist.h"



LinkedList * test_list;


typedef enum TEST_RESULTS {
	PASSED = 0x01,
	FAILED = 0x02
} results_t;


void debug_log(results_t TEST_STATE, char * details)
{
	char * test_state;
	switch(TEST_STATE){
		case PASSED:test_state = "passed";
			break;
		case FAILED:test_state = "FAILED";
			break;
		default: test_state = "UNKNOWN TEST_STATE";
		};
	printf("Test %s : %s \n", test_state, details);
	
}

int run_test( LinkedList * in_list, Node * in_node )
{
	// Declare a function pointer to the test_function in the node
	void (*test_func)() = (void *)(in_node->data);
	printf("Going to call test function at address %p \n", test_func);
	test_func();
	return 0;
}


void run_all_tests( LinkedList * test_list)
{
	printf("Running all tests...\n");
	traverse(test_list, run_test);
	printf("Test run finished!\n");

}

void add_test(char * in_file_name)
{
	if(test_list!= NULL){
		Node * new_node = list_create_node();//void * data);
		list_insert_node(test_list, new_node);
	}
	else{
		
	}
	
	
}


void test_assert_equal(int actual, int expected)
{
	//TODO
}
void test_assert_not_equal(void * actual, void * expected, char * file)
{
	if(actual != expected){
		debug_log(PASSED,"");
	}
	else {
		debug_log(FAILED,"test_assert_not_equal failed");
	}
}
