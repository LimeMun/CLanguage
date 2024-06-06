#include <stdio.h>
int main(void) {
	// 2차원 배열 선언
	int zb[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	printf("Address of zb[0]: %p\n", zb[0]);
	printf("Address of zb[1]: %p\n", zb[1]);
	printf("\n");
	printf("Address of zb: %p\n", zb);
	printf("Address of zb+1: %p\n", zb+1);
	
	printf("\n");
	// 각 요소의 주소 출력
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			printf("Address of zb[%d][%d]: %p\n", i, j, &zb[i][j]);
		}
	}

	//배열 원소 출력
	printf("\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("zb[%d][%d]: %d\n", i, j, zb[i][j]);
		}
	}
	return 0;
}