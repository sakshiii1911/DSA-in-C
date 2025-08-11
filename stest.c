#include<stdio.h>
#include<stdlib.h>

	int stack[100],n,top=-1,choice,i,val;
	void push();
	void pop();
	void trav();
	void main()
	{
		printf("enter no of element in stack");
		scanf("%d",&n);
		while(1)
		{
			printf("1.push\n2.pop\n3.trav\n4.exit\n");
			printf("enter your choice");
			scanf("%d",&choice);
			switch(choice)
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
			case 5:
				{
					printf("invalid choice");
				}		
			}
		};
	}

void push()
{    int val;
	if(top==n)
	{
		printf("overflow");
	}
	else
	{
		printf("enter value");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
		printf("inserted val=%d\n",val);
	}
	
}
void pop()
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		top=top-1;
		val=stack[top];
		printf("poped elment=%d\n",val);
		
	}
}
void trav()
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		for(i=top;i>=0;i--)
		printf("%d\n",&stack[i]);
		
	}
}
