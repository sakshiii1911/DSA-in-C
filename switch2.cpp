#include<stdio.h>
int main()
{
	int c;
	{
	printf("enter 1 for monday\n");
	printf("enter 2 for tuesday\n");
	printf("enter your choice");
	scanf("%d",&c);
    }
	switch(c)
	{
	case 1:printf("monday\n");
	break;
	case 2:printf("tuesday\n");
	break;
	default:("choice code is not found");
    }
	return 0;
}
