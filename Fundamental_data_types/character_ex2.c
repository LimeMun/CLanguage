#include <stdio.h>
int main(void)
{
	char c;
	int i;
	for (i = 'a'; i <= 'z'; ++i)
		printf("%c", i);
	for (i = 65; i <= 90; ++i)
		printf("%c", i);
	for (i = '0'; i <= '9'; ++i)
		printf("%d ", i);
	return 0;
}