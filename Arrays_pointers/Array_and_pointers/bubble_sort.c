#include <stdio.h>
#define N 5

void bubble(int x[], int n);
void swap(int *, int *);

int main(void) {
	int i, j, score[N];
	printf("Input %d scores: ", N);

	for (i = 0; i < N; ++i){
		scanf("%d", &score[i]);
	}
	bubble(score, N);

	printf("Scores sorted: ");
	for (i = 0; i < N; ++i){
		printf("%d ", score[i]);
	}
	printf("\n");

	return 0;
}
void bubble(int x[], int n) {
	int i, j;
	for (i = 0; i < n-1; ++i){
		printf("-----------Iteration %d-----------\n", i);
		for (j = n-1; j > i; --j){
			if (x[j-1] > x[j]){
				swap(&x[j-1], &x[j]);
			}
			printf("Temp array: ");
			for (int k = 0; k < N; ++k){
				printf("%d ", x[k]);
			}
			printf("\n");
		}
	}
}

void swap(int *p, int *q) {
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}