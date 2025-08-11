#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int count=0,i;
	printf("enter string:\n");
	scanf("%s\n",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			count++;
		}
	}
	printf("no of vowels=%d",count);
}

