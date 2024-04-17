#include <stdio.h>
int main(void)
{
	double first_double = 13 + 0.2 + 0.2 + 0.1; /* 13.5 ? */ 
	double second_double = 14 - 0.2 - 0.2 - 0.1; /* 13.5 ? */ 
	if(first_double == second_double)
		printf("Same!\n");
	else
		printf("Not Same!\n");
	printf("%.50f\n", first_double);
	printf("%.50f\n", second_double);
	return 0;
}