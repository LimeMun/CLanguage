#include <stdio.h>
int main(void) {
	int korean, math;
	double average_score;
	printf("Input 2 scores (Korean, Math): ");
	scanf("%d%d", &korean, &math);
	
	average_score = (double)(korean + math) / 2;
	printf("Korean: %d, Math: %d, Average score is %lf\n", korean, math, average_score);
}
