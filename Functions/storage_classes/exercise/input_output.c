#include <stdio.h>
int inputNumFromUser()
{
    static int count = 1;
	int num;
	printf("Enter number %d: ", count++);
	scanf("%d", &num);
	return num;
}

void PrintResult(int first_num, int second_num, int sum)
{
	printf("Input numbers are %d and %d\n", first_num, second_num);
	printf("The sum is %d\n", sum);
}