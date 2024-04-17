#include <stdio.h>

int main(void) {
	int i, sum=0;
	for (i=10; i<=100; i++)
		sum = sum + i;
	printf("Sum = %d\n", sum);
	return 0;
}
