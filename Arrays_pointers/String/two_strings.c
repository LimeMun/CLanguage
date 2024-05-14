#include <stdio.h>
int main() {
	char *p = "abcde"; 
	char s[] = "abcde"; 
	
	printf("Original p: %s\n", p);
	printf("Original s: %s\n", s);

	// 배열 수정 시도
	// p[0] = 'x'; 
	s[0] = 'x'; 

	printf("Modified p: %s\n", p); 
	printf("Modified s: %s\n", s); 
	
	return 0;
}
