#include<stdio.h>
#include<stdlib.h>
# define maxsize 5

	int queue[maxsize],front=-1,rear=-1,choice,i,val;
	void insert();
	void delete();
	void trav();
	void main()
	{
	
		while(1)
		{
			printf("1.insert\n2.delete\n3.trav\n4.exit\n");
			printf("enter your choice");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
			{
				insert();
				break;
			}
			case 2:
				{
					delete();
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
					printf("invalid choice");
				}		
			}
		};
	}
	void insert()
	{
		int val;
		printf("enter value");
		scanf("%d",&val);
		if(rear==maxsize-1)
		{
			printf("overflow\n");
		}
		if(rear==-1 && front==-1)
		{
			rear=0;
			front=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=val;
		printf("inserted val=%d\n",val);
	}
	void delete()
	{
		if(front==-1)
		{
			printf("underflow");
		}
		else
		{
		val=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
			
		}
			
		
		else
		{
			front=front+1;
			
		}
		printf("deleted=%d",val);
	    } 
	}
	void trav()
	{
		if(rear==-1)
		{
			printf("underflow");
		}
		else
		{
			for(i=front;i<=rear;i++)
			printf("%d\n",queue[i]);
		}
	}

