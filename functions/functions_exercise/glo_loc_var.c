#include <stdio.h>

int globalVar = 10;
void modifyVariables() {
	int localVar;
	globalVar += 100;
	localVar += 10;
	printf("Inside function - Global Var: %d, Local Var: %d\n", globalVar, localVar);
}

int main() {
	int localVar = 20;
	printf("Before function call - Global Var: %d, Main Local Var: %d\n", globalVar, localVar);
	modifyVariables();
	printf("After function call - Global Var: %d, Main Local Var: %d\n", globalVar, localVar);
	return 0;
}
