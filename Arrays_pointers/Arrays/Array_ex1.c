#include <stdio.h>
int main(void){
	int int_arr[10] = {0};
	for(int i = 0; i < 20; i++){
		printf("%d: %d\n", i, int_arr[i]);
	}
	return 0;
}
