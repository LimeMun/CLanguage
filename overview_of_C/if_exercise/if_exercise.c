#include <stdio.h>

int main(void) {
	int a, b, min;
	printf("\n%s", "Input two integers: ");
	scanf("%d%d", &a, &b);
	if (a < b)
		min = a;
	else
		min = b;
	printf("Min value is %d\n\n", min);
	return 0;
}

