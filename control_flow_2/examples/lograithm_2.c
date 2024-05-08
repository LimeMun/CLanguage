#include <stdio.h>
#include <math.h>
#define N 100000000000
int main(void)
{
	double n = N;
	double result;
	result = pow(1 + 1/n, n);
	printf("n = %10.f, e = %18.15f\n", n, result);
	return 0;
}