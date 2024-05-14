#include <stdio.h>
#define N 10
int fact(int);
double lne(int);
int main(void)
{
	int n = N;
	double e;
	e = lne(n);
	printf("lne = %10.6f\n", e);
	return 0;
}
double lne(int k)
{
	int i;
	double sum = 1.0;
	for (i = 1; i <= k; i++)
		printf("%d\n", fact(i));
	sum += 1.0 / fact(i);
	return sum;
}
int fact(int m)
{
	int i = 2, f = 1;
	while (i <= m) {
		f *= i;
		i++;
	}
	return f;
}

