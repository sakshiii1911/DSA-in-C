#include<stdio.h>
int main()
{
	int t,r,n,sum=0;
	printf("enter no");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		sum=sum+r;
		t=t/10;
	}
	printf("\nsum =%d",t,sum);
	return 0;
}
