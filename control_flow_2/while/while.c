/* count blanks, digits, letters, newlines, and others */
#include <stdio.h>
int main(void)
{
	int c, blank = 0, digit = 0, letter = 0, nl = 0, other = 0, sum = 0;
	while ((c = getchar())!= EOF) {
		if (c == ' ')
			++blank;
		else if (c >= '0' && c <= '9')
			++digit;
		else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			++letter;
		else if (c == '\n')
			++nl;
		else
			++other;
		sum++;
	}
	printf("%10s%10s%10s%10s%10s%10s\n\n",
		"blanks", "digits", "letters", "lines", "others", "total");
	printf("%10d%10d%10d%10d%10d%10d\n\n",
		blank, digit, letter, nl, other, sum);
	return 0;
}