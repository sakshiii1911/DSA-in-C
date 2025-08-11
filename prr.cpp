#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("enter value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
		if(c==2)
		{
		printf("no is prime");}
		else
	{
			printf("no is com");}
	}
	return 0;
	
}
