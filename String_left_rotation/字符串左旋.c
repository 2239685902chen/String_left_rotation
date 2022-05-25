#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>
void Reverse(char* q, char* n)
{
	assert(*q && *n);
	while (q < n)
	{
		char e = 0;
		e = *q;
		*q = *n;
		*n = e;
		q++;
		n--;
	}
}
void String_left_rotation(char* q, int w, int e)
{
	assert(*q);
	int r = w - 1;
	Reverse(q,q + r);
	Reverse(q + w,q + e - 1);
	Reverse(q,q + e - 1);
}
int main()
{
	char q[] = "abcde";
	int w = 0;
	int e = strlen(q);
	scanf("%d", &w);
	printf("×óÐýÇ°£º%s\n", q);
	String_left_rotation(q, w, e);
	printf("×óÐýºó:%s\n", q);
	return 0;
}