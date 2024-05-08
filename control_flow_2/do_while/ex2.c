#include <stdio.h>

int main() {
    int number = 0 , sum = 0;
	do{
		sum += number;
		printf("Enter an integer: ");
    	scanf("%d", &number);
	}while(number != -1);
	printf("Sum: %d\n", sum);
}
