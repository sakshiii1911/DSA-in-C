#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	int data;
	struct node*link;
};
struct node *head=NULL,*temp,*prev,*NEW;
void create();
void insbegin();
void insend();
void delbegin();
void delend();
int main()
{
	int c,i;
	while(1)
	{
		printf("1.insbegin\n2.insend\n3.delbegin\n4.delend\n5.exit\nenter your choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
		    insbegin();
			break;
		    }
		case 2:
			{
				insend();
				break;
		    }
		case 3:
			{
			delbegin();
				break;
		    }
		case 4:
			{
			delend();
				break;
		    }
		    
		case 5:
			exit(0);
			break;
		default:
			printf("invalid choice");
		
	}
}
}
void create()
{    int n;
	NEW=(struct node*)malloc(sizeof(struct node));
	printf("enter num\n");
	scanf("%d",&n);
	NEW->data=n;
	NEW->link=NULL;
}
void insbegin()
{   create();
	if(head==NULL)
	{
		head=NEW;
	}
	else
	{
	NEW->link=head;
	head=NEW;	
	}
}
void insend()
{    create();
	if(head==NULL)
	{
		head=NEW;
	}
	else
	{
			temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
     	}
     	temp->link=NEW;
    }

	
}
void delbegin()
{
		if(head==NULL)
	{
		printf("list is empty");
	}

	else
	{
		temp=head;
		head=head->link;
		printf("%d is deleted ",temp->data);
		free(temp);
	}
		
}
void delend()
{
	if(head==NULL)
	{
		printf("list is empty");
	}

	else
	{
		temp=head;
		while(temp->link!=NULL)
		{   prev=temp;
			temp=temp->link;
		}
		prev->link=NULL;
		printf("%d is deleted ",temp->data);
		free(temp);
	}
}

