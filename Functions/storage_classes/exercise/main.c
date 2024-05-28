#include <stdio.h>
#include "program.h"

int main(void)
{
	int first_num, second_num, sum;
	first_num = inputNumFromUser();
	second_num = inputNumFromUser();
	sum = CalculateSum(first_num, second_num);
	PrintResult(first_num, second_num, sum);
	return 0;
}