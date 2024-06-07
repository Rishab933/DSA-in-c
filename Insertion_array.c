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
	printf("\nEnter element to insert:\n");
	scanf("%d",&element);
	printf("\nEnter position to insert:\n");
	scanf("%d",&index);
	for(i=size-1;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	for(i=0;i<size+1;i++){
		printf("%d ",arr[i]);
	}
}
