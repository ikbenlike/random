#include <stdio.h>

int test(const char *s1, const char *s2, int maxlen)
{
	while(*s1 && *s1++ == *s2++ && *s2 < maxlen)
		;
	return *s1 - *s2;
}

int main(void){
	printf("%i", test("okay there", "okay then", 11));
	return 0;
}
