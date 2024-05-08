#include <stdio.h>
int main() {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0) {
		goto error; // If number is negative, jump to error label
	}
	goto end; // skip the error case
error: // Label for handling errors
	printf("Error: Negative numbers are not allowed!\n");
end: // Label to end the program
	printf("You entered a positive number: %d\n", number);
	return 0;
}
