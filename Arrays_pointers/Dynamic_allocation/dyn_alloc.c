#include <stdio.h>
#include <stdlib.h>
int sum(int *, int);

int main(void) {
	int * arr, arr_size, arr_sum;
	printf("Input Array Size: ");
	scanf("%d", &arr_size);

	// arr = calloc(arr_size, sizeof(int));
	arr = (int*) malloc(arr_size * sizeof(int));

	for (int i = 0; i < arr_size; i++)
		scanf("%d", &arr[i]);
	arr_sum = sum(arr, arr_size);
	printf("Sum = %d\n", arr_sum);
	free(arr);
	return 0;
}

int sum(int * arr, int arr_size) {
	int sum_res = 0;
	for (int i = 0; i < arr_size; i++)
		sum_res += *(arr + i); /* *(arr + i) == arr[i] */
	return sum_res;
}
