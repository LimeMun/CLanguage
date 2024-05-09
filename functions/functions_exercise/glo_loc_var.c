#include <stdio.h>

int globalVar;
void modifyVariables() {
	int localVar, localVar2;
	globalVar += 100;
	localVar += 10;
	localVar2 = localVar2 + 10;
	printf("Inside function - Global Var: %d, Local Var: %d\n", globalVar, localVar);
}

int main() {
	int localVar;
	printf("Before function call - Global Var: %d, Main Local Var: %d\n", globalVar, localVar);
	modifyVariables();
	printf("After function call - Global Var: %d, Main Local Var: %d\n", globalVar, localVar);
	return 0;
}
