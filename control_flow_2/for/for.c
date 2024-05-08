/* A test code that may have trouble */
#include <stdio.h>
int main(void)
{
	int count = 0;
	double sum = 0.0, x;
	for (x = 9.6; x != 9.9; x += 0.1) {
		sum += x; // 0.1 ~ 9.8 Sum
		printf("count = %5d\n", ++count);
	}
	printf("sum = %f\n", sum);
	return 0;
}