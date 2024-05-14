#include <stdio.h>
int main(void)
{
	char c = 'a';
	printf("character: %c\n", c);
	printf("character in int: %d\n", c);
	printf("%c%c%c\n", c, c+1, c+2);
	printf("%d%d%d", c, c+1, c+2);
}