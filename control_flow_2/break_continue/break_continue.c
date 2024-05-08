#include <stdio.h>
int main() {
	int sum = 0;
	int i = 1;
	int max_value;
	printf("Enter the maximum value: ");
	scanf("%d", &max_value); // 10
	while (i <= max_value) { // 1 ~ 10
		if (sum > 10) { // 1 + 2 + 4
			printf("Last Nubmer: %d\n", i);
			printf("Sum has exceeded 10, program will stop.\n");
			break;
		}
		if (i % 3 == 0) {
			printf("Skip multiple of 3: %d\n", i);
			i++;
			continue;
		}
		sum += i;  // 1 + 2 + 4  + 5= 12
		i++; // i = 6
	}
	printf("The sum is: %d\n", sum);
	return 0;
}
