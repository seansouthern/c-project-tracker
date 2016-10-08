#ifndef TEST_COMMON_INC
#include "../framework/test_common.h"
#endif

#ifndef APPLICATION_INC
#include "../../core/application.h"
#endif

void test_application_init( void )
{

	Application * test_app = application_init();
        if(test_app == NULL){
		debug_log(FAILED, "Application_init returned NULL pointer\n");
	}
	else{
		debug_log(PASSED, "Application_init returned non-NULL pointer\n");
	}
	//The constructor and destructor are tightly coupled
	//To prevent memory leakage, we'll invoke it here without checking on it
	application_destructor(test_app);
        
}
