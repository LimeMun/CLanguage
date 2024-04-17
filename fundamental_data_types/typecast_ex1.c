#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int int_value;
    float double_value;

    printf("Enter Integer value: ");
    scanf("%d", &int_value);

    printf("Enter Double value: ");
    scanf("%f", &double_value);

    // 절댓값 계산 및 출력
    printf("Absoulte value of integer: %d\n", abs(int_value));
    printf("Absoulte value of double: %f\n", fabs(double_value));

    return 0;
}
