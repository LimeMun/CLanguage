#include <stdio.h>
#define SIZE 3

void print_matrix();
void add_matrices();
void subtract_matrices();

void print_matrix() {
}

void add_matrices() {
}

void subtract_matrices() {
}

int main() {
    // Task 1. 출력과 동일하게 행렬 Initialization.
    int matrix1[SIZE][SIZE] = {};
    int matrix2[SIZE][SIZE] = {};
    int result[SIZE][SIZE];
    char operator;


	//Task 2. print_matrix() 함수를 호출하여 matrix1과 matrix2를 출력
    print_matrix();
    print_matrix();

    // 연산자 입력 받기
    printf("Enter operator (+, -): ");
    scanf(" %c", &operator);

    // Task3. add_matrices(), subtract_matrices() Argument 전달하여 연산 수행
    if (operator == '+') {
        add_matrices();
    } else if (operator == '-') {
        subtract_matrices();
    } else {
        printf("Invalid operator\n");
        return 1;
    }

    // Task4. 결과 행렬 출력
    print_matrix();

    return 0;
}
