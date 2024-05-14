#include <stdio.h>
double sum(double dbl_arr[], int n);

int main(void)
{
	double arr_sum, dbl_arr[100] = {1., 3., 5.};
	printf("Func Main: Address of dbl_arr = %p\n", dbl_arr);
	arr_sum = sum(dbl_arr, 100);
	printf("Sum = %f\n", arr_sum);
	return 0;
}

double sum(double dbl_arr[], int n)
{
	printf("Func sum: Address of dbl_arr = %p\n", dbl_arr);
	int i;
	double sum_result = 0.0;
	for (i = 0; i < n; ++i)
		sum_result += dbl_arr[i];
	return sum_result;
}