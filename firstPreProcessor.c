#include <stdio.h>

int main(){
	#ifdef SHOW
		printf("SHOW está definido!\n");
	#endif
	printf("definicao de SHOW\n");
	return 0;
}
