#include<stdio.h>
#include<string.h>
int main()
{
	int a[20],n,i,sum=0;
	printf("enter size:\n");
	scanf("%d\n",&n);
	printf("elements in array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d\n",&a[i]);
    }
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);

	
}
