// program of stack using array
#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top;
void push(int);
int pop();
void display();
int main()
{
	int choice;
	int data;
	char ch;
	top=1;
	printf("\n stack implementation using array:");
	do
	{
		printf("1.push\t 2.pop\t 3.dispay\t 4.exit");
		printf("\n enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the data:");
				scanf("%d",&data);
				push(data);
				break;
				case 2:
					data=pop();
					printf("popped element =%d\n",data);
					break;
					case 3:
						display();
						break;
						case 4:
							exit(0);
							default:
								printf("\n wrong choice");
		}
		fflush(stdin);
		printf("\n do you want to continue[y/n]:");
		scanf("%c",&ch);
	}
	while(ch=='y');
	return 0;
}
//insertion of element into the stack
void push(int a)
{
	//cheack stack is full
	if(top==max-1)
	{
		printf("\n stack is full");
		return ;
	}
	//space in stack
	else
	{
		top++;
		stack[top]=a;
	}
	
}
// delete element from stack
int pop()
{
	int item;
	//stack is empty
	if(top==-1)
	{
		printf("\n stack is empty");
		
	}
	else
	{
		item = stack[top];
		top--;
	}
	return (item);
}
//display elemnet of stack
void dispaly()
{
	int i;
	//check stack is empty
	if(top==-1)
	{
		printf("\n stack is empty");
	}
	// element is present
	else
	{
		printf("\n elements in stack are:");
		for(i=top;i>=0;i--)
		{
			printf("\t%d",stack[i]);
		}
		printf("\n");
	}
}
