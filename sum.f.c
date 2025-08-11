#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b,s;
	printf("\n enter no");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	return 0;
}
int sum(int a,int b)
{
	int add;
	add=a+b;
	return (add);
}
