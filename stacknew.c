#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int stack[100],top=-1,i,c,n;
void push();
void pop();
void trav();
void main()
{  printf("size of array\n");
   scanf("%d\n",&n);
  while(1)
   { 
     printf("\n1)Push\n2)Pop\n3)Traversing\n4)Exit");
     printf("\nEnter your choice:");
     scanf("%d",&c);
     switch(c)
      {
        case 1:
               push();
               break;
        case 2:
               pop();
               break;
        case 3:
               trav();
               break;
        case 4:
               exit(0);
        default:
               printf("\nEnter corrct choice");
      }
   }
}
void push()
{
	int ele;
	if(top==n)
	{
		printf("overflow");
	}
	else
	{
		printf("enter ele\n");
		scanf("%d\n",&ele);
		top=top+1;
		stack[top]=ele;
		printf("%d is pushed",ele);
	}
}
void pop()
{   int ele;
	if(top=-1)
	{
		printf("underflow\n");
	}
	else
	{
		top=top-1;
		ele=stack[top];
		printf("%d is poped",ele);
	}
}
void trav()
{  	if(top=-1)
	{
		printf("underflow\n");
	}
	else
    {
	
	 	for(i=top;i>=0;i--)
	 	printf("travered ele\n",stack[i]);
    }  
}

