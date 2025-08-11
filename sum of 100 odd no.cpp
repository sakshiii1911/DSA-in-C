#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<200;i=i+2)
	{
		sum=sum+i;
		printf("%d",i);
	}
	printf("%d",sum);
	return 0;
}
