#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define SIZE 4
struct node
{
	int data;
	struct node*link;
};
struct node *front=NULL,*rear=NULL,*temp,*NEW;
int queue[SIZE];
void create();
void enqueue();
void dequeue();
void trav();
int main()
{
		int c,i;
	while(1)
	{
		printf("\n1.enqueue\n2.dequeue\n3.trav\n4.exit\nenter your choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
		    enqueue();
			break;
		    }
		case 2:
			{
				dequeue();
				break;
		    }
		case 3:
			{
			trav();
				break;
		    }
	
		case 4:
			exit(0);
			break;
		default:
			printf("invalid choice");
		
	}
}
}
void create()
{
	 int n;
	NEW=(struct node*)malloc(sizeof(struct node));
	printf("enter num\n");
	scanf("%d",&n);
	NEW->data=n;
	NEW->link=NULL;

}

void enqueue()
{   create();
	if(front==NULL||rear==NULL)
	{
	front=NEW;
	rear=NEW;
	}
	else
	{
		rear->link=NEW;
		rear=NEW;
	}
}
void dequeue()
{
	if(front==NULL||rear==NULL)
	{
		printf("empty list\n");
	}
	else
	{
		if(front==rear)
		{
			front=NULL;
			rear=NULL;
		}
		else
		{
			temp=front;
			front=front->link;
			printf("%d is deleted",temp->data);
			free(temp);
			
		}
	}
}
void trav()
{
	if(front==NULL||rear==NULL)
	{
		printf("empty list\n");
	}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
	}
}

