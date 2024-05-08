#include <stdio.h>

int main() {
    int number;

    while (1) { 
        printf("Enter a positive number (0 to exit): ");
        scanf("%d", &number);

        // 사용자가 0을 입력하면 프로그램 종료
        if (number == 0) {
            break;
        }
        
        // 음수가 입력된 경우 경고 메시지 출력 후 루프 계속
        if (number < 0) {
            printf("Negative numbers are not allowed. Please try again.\n");
            continue;
        }
		if (number % 3 == 0) { // 3의 배수인 경우
			printf("Multiple of 3\n");
		}
		else{
			printf("Not multiple of 3\n");
		}
    }

    printf("Program terminated.\n");
    return 0;
}
