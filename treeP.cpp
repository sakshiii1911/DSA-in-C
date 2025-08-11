#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *Lchild,*Rchild;
};

struct node *New=NULL,*temp,*root=NULL,*prev;

void insert();
void preorder(struct node *root1);
void inorder(struct node *root1);
void postorder(struct node *root1);
int main(){
	while(1){
		int choice;
		printf("\n\nEnter choice:\n1.Insert\n2.Preorder Traversal\n3.Inorder Traversal\n4.Post Order traversal\n5.Exit\n\n\n\n:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				exit(0);
			default:
				printf("Enter Valid Option");

		}
	
	}
	return 0;
}
void create(){
	int d;
	printf("\nEnter Data:");
	scanf("%d",&d);
	New=(struct node *)malloc(sizeof(struct node));
	New->data=d;
	New->Lchild=NULL;
	New->Rchild=NULL;
	
	
}
void insert(){
	create();
	if(root==NULL){
		root=New;
	}else
	{
		temp=root;
		while(temp!=NULL){
			prev=temp;
			if(New->data<temp->data)
			{  
				temp=temp->Lchild;
			}
			else
			{
				temp=temp->Rchild;
			}
			
		}
		if(New->data<prev->data){
			prev->Lchild=New;
		}
		else{
			prev->Rchild=New;
		}
	}
}	
void preorder(struct node *root1){
    if(root1!=NULL)
    {
			printf("%d  ",root1->data);
			preorder(root1->Lchild);
			preorder(root1->Rchild);
	}
	
}
void inorder(struct node *root1){
    if(root1!=NULL)
    {
			inorder(root1->Lchild);
			printf("%d  ",root1->data);
			inorder(root1->Rchild);
	}
	
}
void postorder(struct node *root1){
    if(root1!=NULL)
    {
			
			postorder(root1->Lchild);
			postorder(root1->Rchild);
			printf("%d  ",root1->data);
	}
	
}
