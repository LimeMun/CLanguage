#include <stdio.h>
#include <time.h>
#define N 1000000000
void without_register() {
	unsigned int i, sum = 0;
	for (i = 0; i < N; i++) {
		sum += i;
	}
	printf("Sum without register: %u\n", sum);
}
void with_register() {
	register unsigned int i, sum = 0;
	for (i = 0; i < N; i++) {
		sum += i;
	}
	printf("Sum with register: %u\n", sum);
}
int main() {
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	without_register();
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Time taken without register: %f seconds\n", cpu_time_used);

	start = clock();
	with_register();
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Time taken with register: %f seconds\n", cpu_time_used);
	return 0;
}
