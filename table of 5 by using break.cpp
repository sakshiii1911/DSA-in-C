#include<stdio.h>
int main()
{
	int i=1,n=5,c;
	while(i<=10)
	{
		c=n*i;
		if(c==25)
		continue;
		else
		{ printf("\n %d",c);
		i=i+1;
		}
	}
	return 0;
}
