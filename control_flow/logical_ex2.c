#include <stdio.h>
int main(void){
	char c = 'w';
	double x = 7e+33, y = 0.001;
	printf("%d %d %d\n", c == 'a', c == 'b', c != 'c');
	printf("%d\n", c == 'A' && c <= 'B' || 'C');
	printf("%d\n", x + y > x - y);
	return 0;
}