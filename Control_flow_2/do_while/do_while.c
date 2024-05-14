/* Factorial computation */
#include <stdio.h>
#define N 6
int main(void)
{
	int n = N;
	long result = 1;
	do {
		result *= n; // 6, 5, 4, 3, 2,
		n--;
	} while (n > 1);
	printf("%d! = %ld\n", N, result);
	return 0;
}