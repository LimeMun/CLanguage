#include <stdio.h>
int main(void){
	int value = 4;
	printf("Value: %d\n", value);
	printf("Value Address: %p\n", &value);

	int *value_ptr;
	value_ptr = &value;\
	printf("\n");
	printf("Value Pointer: %p\n", value_ptr);
	printf("Value Pointer Value: %d\n", *value_ptr);
	printf("Value Pointer Address: %p\n", &value_ptr);
}
