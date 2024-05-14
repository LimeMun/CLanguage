#include <stdio.h>
int compute_sum(int);

int main(void)
{
	long n = 3, sum;
	printf("n = %d\n", n);
	sum = compute_sum( n );
	printf("sum = %d\n", sum);
	printf("n = %d\n", n);
	return 0;
}

int compute_sum(int k)
{
	int sum = 0;
	for ( ; k > 0; --k)
		sum += k;
	return sum; /* k becomes 0 when return */
}