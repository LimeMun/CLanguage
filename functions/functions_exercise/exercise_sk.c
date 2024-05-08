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
