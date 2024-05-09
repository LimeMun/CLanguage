/* Factorial computation */
#include <stdio.h>
#define N 6
// long factdo(long);

int main(void)
{
	long n = N, f;
	f = factdo( n );
	printf("%ld! = %ld\n", n, f);
	return 0;
}

long factdo(long k )
{
	long result = 1;
	do {
		result *= k;
		k--;
	} while (k > 1);
	return result;
}