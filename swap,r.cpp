#include<stdio.h>
void swap(int*,int*);
int main()
{
	int x,y;
	printf("enter value\n");
	scanf("%d%d",&x,&y);
	printf("before x=%d&y=%d\n");
	swap(&x,&y);
	printf("after swap x=%d&y=%d\n");
	return 0;
}
int swap(int*a,int*b)
{
	int temp;
	temp=b*;
	b*=a*;
	a*=temp;
	return 0;
}
