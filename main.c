#ifdef WIN32
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "exercices.h"

int main(int argc, char ** argv) {

	if ( argc == 2 ) {
		if ( strcmp( argv[1], "Test1" ) == 0 ) {
			OpenmpTest1();
		}else if ( strcmp( argv[1], "Test2" ) == 0 ) {
			OpenmpTest2();
		}else if ( strcmp( argv[1], "Test3" ) == 0 ) {
			OpenmpTest3();
		}else if ( strcmp( argv[1], "Test4" ) == 0 ) {
			OpenmpTest4();
		}
	}else {
		printf( "Bad usage\n" );
	}

	
	return 0;

}
