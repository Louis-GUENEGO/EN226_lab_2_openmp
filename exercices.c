#include "exercices.h"

void OpenmpTest1() {

	printf( "Master thread\n" );

	#pragma omp parallel 
	{
		printf( "Worker thread\n" );
	}
	
	printf( "Master thread\n" );

}

void OpenmpTest2() {
}

void OpenmpTest3() {
}

void OpenmpTest4() {
}
