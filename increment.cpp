#include<stdio.h>
int main()
{
	int a;
	printf("\n enter value");
	scanf("%d",&a);
	if(a>50)
	{
		a+=2;
		printf("after increment=%d",a);
	}
	return 0;
	}
