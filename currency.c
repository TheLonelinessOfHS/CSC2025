#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("No input argument\n");
		return EXIT_FAILURE;
	}

	float f = strtof(argv[1], NULL);
	
	if ((f == 0) || (f == HUGE_VALF)) {
		printf("The first argument should be a float number!\n");
		return EXIT_FAILURE;
	}	

	printf("%15s%10s\n", "UK Pounds", "EUROS");
	for (int i = 1; i <=100; i = i * 10) {
		printf("%15d%10.2f\n", i, i * f);		
	}

	return EXIT_SUCCESS;
}
