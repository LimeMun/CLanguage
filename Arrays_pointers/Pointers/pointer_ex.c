#include <stdio.h>
void double_values(int *num1, int *num2);


void double_values(int *num1, int *num2) {
	*num1 *= 2;
	*num2 *= 2;

}

int main() {
    int num1 = 5;
    int num2 = 8;

    printf("변경 전: num1 = %d, num2 = %d\n", num1, num2);
	double_values(&num1, &num2);
    printf("변경 후: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
