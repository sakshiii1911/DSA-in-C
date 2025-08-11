#include<stdio.h>
int main()
{
	int da,ta,gs,b;
	printf("enter value\n");
	scanf("%d",&b);
	da=(b*80)/100;
	printf("daily allowance=%d\n",da);
	ta=(b*20)/100;
	printf("travelling allowance=%d\n",ta);
	gs=b+da+ta;
	printf("gross salary=%d\n",gs);
	return 0;
}
