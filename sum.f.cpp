#include<stdio.h>
int sum(int,int);
void main()
{
	int a,b,s;
	printf("\n enter no");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
}
void sum(int a,int b)
{
	return a+b;
}
