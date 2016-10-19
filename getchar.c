#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	printf("Please input 10 characters");
	char arr[10];

	for (int i = 0; i < 10; ++i) {
		while(isspace((arr[i] = getchar())));
	}

	for (int i = 0; i < 10; ++i) {
		printf("%c ", arr[i]);
	}

	printf("\n");

	return EXIT_SUCCESS;
}
