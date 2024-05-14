#include <stdio.h>

int main(void){
	char c = 'w';
	int i = 1, j = 2, k = -7;
	double x = 7e+33, y = -0.001;
	
	printf(" 3 < j < 5: %d\n", 3 < j < 5);
	printf("x - 3.333 <= x + y: %d\n", x - 3.333 < x + y);
	return 0;
}