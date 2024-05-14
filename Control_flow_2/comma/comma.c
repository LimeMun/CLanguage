#include <stdio.h>
int main() {
	int i, j, k = 3;
	double x = 3.3, m;
	m = (i = 1, j = 2, ++k + 1);
	printf("Result 1: %f\n", m);
	m = (k != 1, ++x * 2.0 + 1);
	printf("Result 2: %f\n", m);
	return 0;
}