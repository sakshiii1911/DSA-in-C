#include<stdio.h>
int main()
{
	int sum=0,n,i,a[20];
	printf("\nsize of array");
	scanf("%d",&n);
	printf("\nelement of array");
	for(i=0;i<n;i++)
   {
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	
	sum=sum+a[i]  ;
    }
	printf("sum of array",sum);
	
}
