#ifndef TEST_COMMON_INC
#define TEST_COMMON_INC
#endif

#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif


#include <stdio.h>




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


int generate_func_pointer_includes(LinkedList * func_names, LinkedList * fm)
{
	

	return 0 ;	
}


int add_test(LinkedList * test_list, void(*test_func)(void))
{
	list_insert_node(test_list, list_create_node(test_func));
	
	return 0;
}


int run_test( LinkedList * in_list, Node * in_node )
{
	void (*test_func)() = in_node->data;
	test_func();	
	return 0;
}


void run_all_tests( LinkedList * test_list)
{
	traverse(test_list, run_test);
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
