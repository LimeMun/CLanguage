#include <stdio.h>
#include "program.h"
// 덧셈을 수행하는 함수
int add(int x, int y) {
    return x + y;
}

// 뺄셈을 수행하는 함수
int subtract(int x, int y) {
    return x - y;
}

// 곱셈을 수행하는 함수
int multiply(int x, int y) {
    return x * y;
}

// 나눗셈을 수행하는 함수
double divide(int x, int y) {
    if (y != 0)
        return (double) x / y;
    else {
        printf("Error: Division by zero.\n");
        return 0.0;
    }
}