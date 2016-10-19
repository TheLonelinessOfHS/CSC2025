#include <stdio.h>
#include <stdlib.h>


int rfactorial(int n) {
	if (n < 2) {
		return 1;
	}	

	return n * rfactorial(n - 1);	
}

int factorial(int n) {
	if (n < 2) {
		return 1;
	}
	
	int ret = 1;
	for (int i = 1; i <= n; ++i) {
		ret = ret * i;
	}	

	return ret;
}

void print_warning() {
	printf("Error: Illegal arguments. Format should be:factorial r|i positive iinteger\n");
}

int main(int argc, char *argv[]) {
	if ((argc < 3)) {
		print_warning();
		return EXIT_FAILURE;
	}

	char c = argv[1][0];
	int n = atoi(argv[2]);

	if (((c != 'r') && (c != 'i')) || (n <= 0)) {
		print_warning();
		return EXIT_FAILURE;
	}	

	int ret = 0;
	if (c == 'r') {
		ret = rfactorial(n);
	}

	else {
		ret = factorial(n);
	}

	printf("The factorial of %d is: %d\n", n, ret);

	return EXIT_SUCCESS;
}
