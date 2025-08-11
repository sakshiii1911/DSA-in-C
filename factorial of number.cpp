#include<stdio.h>
int main()
{
	int n,b=1,i=1;
	printf("Enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		b=b*i;
		i=i+1;
	}
	printf("factorial of n0.=%d",b);
	return 0;
}
