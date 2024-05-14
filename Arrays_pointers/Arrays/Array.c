#include <stdio.h>
int main(void){
	int int_arr[10] = {1,2};
	float float_arr[5] = {1.0 , 2.0, 3.0, 4.0, 5.0};
	double double_arr[100] = {0.0};
	char char_arr[30];
	
	int int_arr2[] = {2, 3, -5, 7};
	int int_arr3[4] = {2, 3, -5, 7};
	printf("int_arr2\n");
	for(int i = 0; i < 4; i ++){
		printf("%d\n", int_arr2[i]);
	}
	printf("\nint_arr3\n");
	for(int i = 0; i < 4; i ++){
		printf("%d\n", int_arr3[i]);
	}

	char s[] = {'a', 'b', 'c', '\0'};
	char s2[] = "abc";
	printf("%s\n", s);
	printf("%s\n", s2);
	return 0;
}
