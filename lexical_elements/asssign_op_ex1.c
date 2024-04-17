#include <stdio.h>

int main(void){
	int a, b, c;
	a = b = 1;
	c = a+ (++b); /* (a++) + b or a + (++b) */
	printf("c: %d\n", c);
	
	return 0;
}
