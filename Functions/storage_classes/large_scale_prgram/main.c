#include <stdio.h>
#include "program.h"
// 메인 함수
int main(void) {
    int num1, num2;
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    printf("Division: %.2f\n", divide(num1, num2));

    return 0;
}
