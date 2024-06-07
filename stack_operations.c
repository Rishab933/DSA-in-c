#include<stdio.h>
int top=-1;
int n;
int i;
int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int isFull()
{
	if(top==n-1)
		return 1;
	else
		return 0;
}
void push(int a[],int p)
{
	if(isFull()){
		printf("Stack overflow\n");
	}
	else{
		top=top+1;
		a[top]=p;
	}
}
int pop(int a[]){
	if(isEmpty()){
	printf("Stack underflow\n");
	}
	else{
		int f=a[top];
		top=top-1;
		return f;
		
	}
}
int peek(int a[],int i)
{
	if(top-i+1<0)
	{
		printf("\nNot a valid position");
		return -1;
	}
	else
	{
		return a[top-i+1];
	}
}
void display(int a[])
{
	int c=1;
	for(i=0;i<=top;i++){
		printf("\nElement %d : %d",c,a[i]);
		c++;
	}
}
void check(){
	if(isEmpty()==1)
	{
		printf("\nThe stack is Empty");
	}
	else
	{
		printf("\nThe stack is not Empty");
	}
	if(isFull()==1)
	{
		printf("\nThe stack is Full");
	}
	else
	{
		printf("\nThe stack is not Full");
	}
}
int main()
{
	printf("Enter the size of the stack: ");
	scanf("%d",&n);
	int a[n];
	push(a,10);
	push(a,20);
	push(a,30);
	push(a,40);
	push(a,50);
	push(a,60);
	check();
	display(a);
	printf("\nThe popped value is %d",pop(a));
	check();
	display(a);
	int pos;
	printf("\nEnter the position : ");
	scanf("%d",&pos);
    int ele=peek(a,pos);
    printf("\nThe element is %d",ele);
}
