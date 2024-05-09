#include <stdio.h>

void increment() {
	static int count = 0;
	count++;
	printf("Current count: %d\n", count);
}

int main() {
	for (int i = 0; i < 5; i++) {
		increment(); 	
	}
	return 0;
}
