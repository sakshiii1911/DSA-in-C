#include<stdio.h>
int main()
{
	int i,n,b=1;
	printf("Enter no:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		b=b*i;
	}
	printf("factorial=%d",b);
	return 0;
}

