#include <stdio.h>

// 2차원 배열의 합을 계산하는 함수
int sum2D(int a[][5], int rows) {
    int i, j, sum = 0;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < 5; ++j) {
            sum += a[i][j];
        }
    }
    return sum;
}

// 3차원 배열의 합을 계산하는 함수
int sum3D(int a[][3][2], int x, int y, int z) {
    int i, j, k, sum = 0;
    for (i = 0; i < x; ++i) {
        for (j = 0; j < y; ++j) {
            for (k = 0; k < z; ++k) {
                sum += a[i][j][k];
            }
        }
    }
    return sum;
}

int main() {
    // 2차원 배열 선언 및 초기화
    int a2D[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    // 3차원 배열 선언 및 초기화
    int a3D[4][3][2] = {
        {{1, 2}, {3, 4}, {5, 6}},
        {{7, 8}, {9, 10}, {11, 12}},
        {{13, 14}, {15, 16}, {17, 18}},
        {{19, 20}, {21, 22}, {23, 24}}
    };

    // 2차원 배열의 합 계산 및 출력
    int result2D = sum2D(a2D, 3);
    printf("Sum of 2D array: %d\n", result2D);

    // 3차원 배열의 합 계산 및 출력
    int result3D = sum3D(a3D, 4, 3, 2);
    printf("Sum of 3D array: %d\n", result3D);

    return 0;
}
