#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("\n1.add\n2.sub\n3.mul\n4.div\nenter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf("\nenter a & b");
		       scanf("%d %d",&a,&b);
		       printf("addition is :",(a+b));
		       break;
		case 2:printf("\nenter a & b");
		       scanf("%d %d",&a,&b);
		       printf("subtraction is :",(a-b));
		       break;
		case 3:printf("\nenter a & b");
		       scanf("%d %d",&a,&b);
		       printf("multiplication is :",(a*b));
		       break;
		case 4:printf("\nenter a & b");
		       scanf("%d %d",&a,&b);
		       printf("division is :",(a/b));
		       break;
		case 5:exit(0);
		default :printf("invalid choice");
		
	}
	return 0;
}
