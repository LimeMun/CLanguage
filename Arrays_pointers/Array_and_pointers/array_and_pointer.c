#include <stdio.h>
int main() {
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p;
	p = a; /* p라는 포인터 변수에, a라는 배열의 시작 주소를 저장*/

	/* p와 a의 값 비교*/
	printf("p : %p\n", p);
	printf("a : %p\n", a);

	// 배열과 포인터의 관계
	for (int i = 0; i < 10; i++) {
		printf("a[%d] = %d, ", i, a[i]);
		printf("p[%d] = %d\n", i, p[i]);
	}
	printf("\n");

	/* 포인터 연산 */
	int *p1 = a + 1; 
	int *p2 = a + 5;

	/* p1, p2에 저장된 주소값 출력 */
	printf("Value of p1: %p\n", p1);
	printf("Value of p2: %p\n", p2);

	/* p1, p2에 저장된 주소값을 이용하여 해당 주소에 저장된 값 출력 */
	printf("Value of p1: %d\n", *p1);
	printf("Value of p2: %d\n", *p2);

	return 0;
}
