#ifndef TEST_COMMON_INC
#include "test_common.h"
#endif

#ifndef APPLICATION_INC
#include "../core/application.h"
#endif

void test_application_create_project( void )
{
        Application * test_app = application_init();

	// Empty case
	
	Project * test_proj = application_create_project(test_app, "", "");

	test_assert_not_equal(test_proj, NULL, __FILE__);
	

}
