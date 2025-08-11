#include<stdio.h>
#include<stdlib.h>
int stack[100],i,top,size,c;
void push();
void pop();
void trav();
void main()
{
	printf("\nenter size");
	scanf("%d",&size);
	while(1)
	{
		printf("\n1.push\n2.pop\n3.trav\n4.exit\nenter your choice");
		scanf("%d",c);
		switch(c)
		{
			case 1:
			       {
				   push();
			       break;
			       }
			case 2:
				   {
				   pop();
				   break;
				   }
			case 3:
				   {
				   	trav();
				    break;
				   }
			case 4:
				   exit(0);
			default:
				   {
				   	printf("\ninvalid choice");
				   }
				   	   
				   	      
		}
		
	}
}
void push()
{   int item;
	if(top==size-1)
	{
		printf("\nstack is full");
	}
	else
	{   printf("\nenter item");
	    scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
void pop()
{   
	if(top==-1)
	{
		printf("\nstack is empty");
	}
	else
	{
	    
		top=top-1;
		
	}
}
void trav()
{
	if(top==-1)
	{
		printf("\nstack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);
	}
}
