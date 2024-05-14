#include <stdio.h>
/*Differene in float and double*/

int main(void){
    float ex_float = 1.0 / 7.0;
    double ex_double = 1.0 / 7.0;
    printf("The value of ex_float:  %0.20f\n", ex_float);
    printf("The value of ex_double: %0.20lf\n", ex_double);
	return 0;
}