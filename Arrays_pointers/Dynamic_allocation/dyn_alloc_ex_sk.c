#include <stdio.h>
#include <stdlib.h>
/* 결과 배열 저장 함수 작성 */

int main(void) {
	int *arr1, *arr2, *result_arr, arr_size;
	printf("Input Array Size: ");
	scanf("%d", &arr_size);
	
	/* 배열 동적할당 */

	/* 배열 값 입력 */
	
	make_res_arr(arr1, arr2, result_arr, arr_size);
	printf("---Result Array---\n");
	for(int i = 0; i < arr_size; i++)
		printf("%d: %d\n", i, result_arr[i]);
	
	/* 동적할당 해제*/

	return 0;
}
