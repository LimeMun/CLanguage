#include <stdio.h>
int main(void){
	int int_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int mul_result = 1;
	for(int i = 0; i < 10; i++){
		mul_result *= int_arr[i];
		printf("%d: Multiply: %d, Temp Result: %d\n", i, int_arr[i], mul_result);
	}
	printf("Multiply Result: %d\n", mul_result);
	return 0;
}
