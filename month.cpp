#include<stdio.h>
int main()
{
	int month;
	printf("\n enter value");
	scanf("%d",&month);

		if(month==2)
		printf("\n 20 29 days");
		else if(month==4 ||month==9)
		printf("\n 30 days");
		else if(month==1||month==8||month==12)
		printf("\n 31 days");
		else
		printf("invalid choice");
		return 0;
	}

