#include<stdio.h>

int main()
{
	int size;
	printf("\nEnter the size of the array: ");
	scanf("%d",&size);
	int arr[150],index,element,i;
	printf("\nInsert array elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the index to be deleted:\n");
	scanf("%d",&index);
	for(i=index;i<size-1;i++){
		arr[i]=arr[i+1];
	}
	for(i=0;i<size-1;i++){
		printf("%d ",arr[i]);
	}
}
