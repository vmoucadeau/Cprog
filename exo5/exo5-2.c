#include <stdio.h> 
#include "exo5-2-fonctions.h" 
#include "exo5-2-tests.h" 


int main () 
{
	if (testfile() == 0 ) { printf("test de file FAILED\n"); }
	if (testpile() == 0 ) { printf("test de pile FAILED\n"); }
}

