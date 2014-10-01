#include "stlist.h"

int main() {
	Student *StartPtr = NULL;
	
	push(&StartPtr);
	push(&StartPtr);
	
	pop(&StartPtr);

	return 0;
}
