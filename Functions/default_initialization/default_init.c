#include <stdio.h>

int globalVar;
void modifyVariables() {
	int local_var;
	register int reg_local_var2;
    globalVar += 100;
    local_var += 10;
    reg_local_var2 = reg_local_var2 + 10;
    printf("Inside function - Global Var: %d, Local Var: %d\n", globalVar, reg_local_var2);
}
int main() {
    int local_var;
	register int reg_local_var2;
    printf("Before function call - Global Var: %d, Main Local Var: %d, Register Local Var: %d\n", globalVar, local_var, reg_local_var2);
    modifyVariables();
    printf("After function call - Global Var: %d, Main Local Var: %d, Register Local Var: %d\n", globalVar, local_var, reg_local_var2);
    return 0;
}