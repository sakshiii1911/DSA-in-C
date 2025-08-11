#include<stdio.h>
void tri();
int main()
{
	tri();
	return 0;
}
void tri()
{
	int a,b,c;
	printf("\n enter value");
	scanf("%d%d%d",&a,&b,&c);

		if(a==b&&a==c)
		printf("\n tri is eqi");
		else if(a!=b&&a!=c)
		printf("\n tri is sca");
		else
		printf("\n tri is iso");
	}

