#include <stdio.h>
void example1(int *a[], int n) {
	printf("Using *a[]: %p\n", a);
	for (int i = 0; i < n; ++i) {
		printf("example1: a[%d] = %d\n", i, *a[i]);
	}
}

void example2(int (*a)[], int n) {
	printf("\nUsing (*a)[]: %p\n", a);
	for (int i = 0; i < n; ++i) {
		printf("example2: a[0][%d] = %d\n", i, (*a)[i]);
	}
}

int main() {
	// *a[]: 포인터들의 배열
	int val1 = 1, val2 = 2, val3 = 3;
	int *array1[] = { &val1, &val2, &val3 };

	example1(array1, 3);

	// (*a)[]: 배열을 가리키는 포인터

	int array2[] = { 1, 2, 3 };
	int (*pArray2)[] = &array2;
	example2(pArray2, 3);
	return 0;
}