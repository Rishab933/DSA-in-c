#include<stdio.h>
int main()
{
	int size;
	printf("\nEnter the size of the array: ");
	scanf("%d",&size);
	int arr[150],i,element,flag=0;
	printf("\nInsert array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be searched: ");
	scanf("%d",&element);
	int x;
	for(i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			x=i;
			flag=1;
		}
	}
		if(flag==1){
		printf("\nThe element was found at the position: %d",x+1);
	}
	else
		printf("\nThe element was not found");
	}
