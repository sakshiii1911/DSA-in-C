#include<stdio.h>
int main()
{
	int i=1,b=1,n;
	printf("enter no:\n");
	scanf("%d",&n);
	do
	{
		b=b*1;
		i=i+1;
	}
	while(i<=n);
	printf("factorial=%d",b);
	return 0;
	
}
