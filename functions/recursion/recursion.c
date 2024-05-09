#include <stdio.h>
int sum(int);

int main(void)
{
	int n = 4;
	printf("The sum of 1 to %d = %d\n", n, sum(n));
	return 0;
}

int sum(int k)
{
	if (k <= 1)
		return k;
	else
		return k + sum(k-1);
}
