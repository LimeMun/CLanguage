#include <stdio.h>

int main() {
    int num, star_point;

    printf("Enter an integer: ");
    scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		for(int j = 0; j < i; j++){
			printf("*");
		}
		printf("\n");
	}

    return 0;
}
