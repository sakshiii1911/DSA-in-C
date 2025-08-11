#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("\n enter numbers");
	scanf("\n%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum*10-r;
		n=n/10;
	}
	printf("\nreversed numbers=%d",n);
	return 0;a
}
