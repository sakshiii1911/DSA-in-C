#include<stdio.h>
int fun(int[],int);
int  main()
{
	int arr[5];
	fun(arr ,5);
	return 0;
	
}
int fun(int arr[],int n)
{
	int i;
	printf("\n enter ele");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("display ele");
	for(i=0;i<5;i++)
	{ 
	printf("\n%d",arr[i]);
	}
	return 0;
}

