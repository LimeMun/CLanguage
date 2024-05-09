#include <stdio.h>

int inputNumFromUser(int count);
int CalculateSum(int first_num, int second_num);
void PrintResult(int first_num, int second_num, int sum);

int main(void)
{
	int first_num, second_num, sum;
	int count = 1;
	first_num = inputNumFromUser(count++);
	second_num = inputNumFromUser(count++);
	sum = CalculateSum(first_num, second_num);
	PrintResult(first_num, second_num, sum);
	return 0;
}

int inputNumFromUser(int count)
{
	int num;
	printf("Enter number %d: ", count);
	scanf("%d", &num);
	return num;
}

int CalculateSum(int first_num, int second_num)
{
	int sum = 0;
	for (int i = first_num; i <= second_num; i++)
	{
		sum += i;
	}
	return sum;
}

void PrintResult(int first_num, int second_num, int sum)
{
	printf("Input numbers are %d and %d\n", first_num, second_num);
	printf("The sum is %d\n", sum);
}