#include <stdio.h>

int main(void){
	/* First Problem*/
	int a = 2, b = -3, c = 5, d = -7, e = 11;
	int temp_1 = 7 + c * -- d / e;
	
	a = 2, b = -3, c = 5, d = -7, e = 11;
	int temp_2 = 7 + ((c * (--d)) / e);
	printf("temp_1: %d, temp_2: %d\n", temp_1, temp_2);

	return 0;
}
