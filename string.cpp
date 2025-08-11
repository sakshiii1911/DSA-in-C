#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	gets(a);
	gets(b);
	strcat(b,a);
	puts(b);
	return 0;
}
