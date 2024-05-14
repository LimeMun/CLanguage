#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        for (int i = number; i <= 2 * number; ++i) {
            sum += i; // 3 + 4 + 5 + 6
        }
    } else {
        int i = 2 * number; 
        while (i <= number) {
            sum += i; // -6 + -5 + -4 + -3
            ++i; 
        }
    }

    printf("Sum: %d\n", sum);
    return 0;
}
