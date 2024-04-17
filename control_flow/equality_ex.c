#include <stdio.h>

int main(void){
	char c = 'w';
	int i = 1, j = 2, k = -7;
	double x = 7e+33, y = -0.001;
	
	printf(" y + 0.1 - 0.1 == y: %d\n", y + 0.1 - 0.1 == y);
	printf(" i + j + k == - 2 * - k: %d\n", i + j + k == - 2 * - k);
	return 0;
}
