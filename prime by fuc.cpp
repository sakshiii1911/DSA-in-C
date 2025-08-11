#include<stdio.h>
void pri(int);
int main()
{
	int n;
	printf("\n enter n");
	scanf("\n%d",&n);
	pri(n);
	return 0;
}
void pri(int n)
{
	int i,cout=0;
	for(i=0;i<=n;i++)
	{
		if(n%i==0)
		{
			cout=0;
			break;
		}
		if(cout=0)
		printf("\n number is prime");
		else
		printf("\n number is composite");
	}
}
