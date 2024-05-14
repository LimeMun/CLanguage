#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "beautiful big sky country";
	char s2[] = "how now brown cow";

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2 + 8);
	printf("Length of s1: %zu\n", len1); // 25
	printf("Length of s2 + 8: %zu\n", len2); // 9

	int cmpResult = strcmp(s1, s2);
	printf("Comparison of s1 and s2: %d\n", cmpResult); // ASIC code of b(98) - h(104) = -6

	printf("%s\n", s1 + 10); // "big sky country"

	strcpy(s1 + 10, s2 + 8);
	printf("s1 after strcpy: %s\n", s1); // "beautiful brown cow"

	strcat(s1, "s!");
	printf("s1 after strcat: %s\n", s1); // "beautiful brown cows!"

	return 0;
}
