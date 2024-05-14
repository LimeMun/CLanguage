#include <stdio.h>
void swap(int *, int *);

int main(void) {
	int a, b;
	a = 10;
	b = 20;
	printf("Before\na = %d, b = %d\n\n", a, b);
	swap(&a, &b);
	printf("After \na = %d, b = %d\n\n", a, b);
	return 0;
}

void swap(int *p, int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
	return;
}