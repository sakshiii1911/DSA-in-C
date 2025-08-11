#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int,int);
void swapr(int*,int*);
int main()
{
	int n,m,c;
	printf("enter n,m\n");
	scanf("%d %d",&n,&m);
	printf("1.swap\n2.swapr\n3.exit\nenter your choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
			swap(n,m);
			break;
		    }
		case 2:
			{
			swapr(&n,&m);
			break;
		    }
		case 3:
			exit(0);
			break;
		default:
			printf("invalid choice");
		
	}
}
	void swap(int n,int m)
	{
		int t;
		t=n;
		n=m;
		m=t;
		printf("n=%d m=%d\n",n,m);
	}
	void swapr(int *n,int *m)
	{
		int temp;
		temp=*n;
		*n=*m;
		*m=temp;
		printf("n=%d m=%d\n",*n,*m);
	}
	
	
	
	

