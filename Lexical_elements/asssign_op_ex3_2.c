#include <stdio.h>

int main(void){
	/* Second Problem */
	int a = 2, b = -3, c = 5, d = -7, e = 11;
	int first_expression = 39 / - ++ e -+ 29 % c;

	a = 2, b = -3, c = 5, d = -7, e = 11;
	int second_expression = (39 / (- (++ e))) - ((+ 29) % c);
	printf("first_expression: %d, second_expression: %d\n", first_expression, second_expression);

	/* Third Problem */
	// int a = 2, b = -3, c = 5, d = -7, e = 11;
	// int first_expression = a += b += c += 1 + 2;

	// a = 2, b = -3, c = 5, d = -7, e = 11;
	// // int second_expression = (a += (b += (c += (1 + 2))));
	// int second_expression = (a += (b += (c += (1 + 2))));/* c = 8, b = 5, a = 7 second_expression = 7  */
	// printf("first_expression: %d, second_expression: %d\n", first_expression, second_expression);

	return 0;
}
