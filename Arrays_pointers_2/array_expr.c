#include <stdio.h>

int main() {
    // 2차원 배열 선언
    int a[2][3] = {{1, 2, 3},{4, 5, 6}};

    int i = 1, j = 2;

    // 기본 표현
    printf("a[%d][%d] = %d\n", i, j, a[i][j]);

    printf("*(a[%d] + %d) = %d\n", i, j, *(a[i] + j));

    printf("(* (a + %d))[%d] = %d\n", i, j, (*(a + i))[j]);

    printf("*(*(a + %d) + %d) = %d\n", i, j, *(*(a + i) + j));

    printf("*(&a[0][0] + %d * %d + %d) = %d\n", 3, i, j, *(&a[0][0] + i * 3 + j));

    return 0;
}