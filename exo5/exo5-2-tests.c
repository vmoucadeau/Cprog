#include <stdio.h> 
#include "exo5-2-fonctions.h"

int testfile() 
{
	int res; 
	enfiler(3); 
	enfiler(0); 
	enfiler(2); 
	if( (!defiler(&res)) || (res != 3 )) return 0; 
	if( (!defiler(&res)) || (res != 0 )) return 0; 
	if( (!defiler(&res)) || (res != 2 )) return 0; 
	if (defiler(&res)) return 0; 
	if (defiler(&res)) return 0; 
	return 1; 
}

int testpile() 
{
	int res; 
	empiler(13); 
	empiler(9); 
	empiler(22); 
	// depiler vaut 1 si OK, O sinon. 
	if( (!depiler(&res)) || (res != 22 )) return 0; 
	if( (!depiler(&res)) || (res != 9 )) return 0; 
	if( (!depiler(&res)) || (res != 13 )) return 0; 
	if (depiler(&res)) return 0; 
	if (depiler(&res)) return 0; 
	return 1; 
}



