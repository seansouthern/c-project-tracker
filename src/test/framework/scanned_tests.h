#ifndef SCANNED_TESTS_H
#define SCANNED_TESTS_H
#endif
#ifndef LINKEDLIST_INC
#include "linkedlist.h"
#endif
#include "../tests/test_application_create_project.c"
#include "../tests/test_application_init.c"
LinkedList * initialize_generated_tests()
{
LinkedList * final_test_list = list_create();
void (*p_test_application_create_project)(void) = test_application_create_project;
list_insert_node(final_test_list, list_create_node(p_test_application_create_project));
void (*p_test_application_init)(void) = test_application_init;
list_insert_node(final_test_list, list_create_node(p_test_application_init));
return final_test_list;
}