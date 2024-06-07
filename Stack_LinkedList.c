#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * next;
};
int isEmpty(struct Node * p){
	if(p==NULL){
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(struct Node * p)
{
	struct Node * d=(struct Node *)malloc(sizeof(struct Node));
	if(d==NULL){
	return 1;
	}
	else{
		return 0;
	}
}
struct Node * push(struct Node * p,int val){
	if(isFull(p)){
		printf("\nStack overflow");
	}
	else{
		struct Node * n=(struct Node *)malloc(sizeof(struct Node));
		n->data=val;
		n->next=p;
		p=n;
		return p;
	}
}
int pop(struct Node ** p){
	if(isEmpty(*p)){
		printf("\nStack underflow");
	}
	else{
		struct Node * n =*p;
		*p=(*p)->next;
		int x=n->data;
		free(n);
		return x;
	}
}
void traversal(struct Node * ptr){
	while(ptr!=NULL){
		printf("\nElement : %d",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	struct Node * top=NULL;
	top=push(top,10);
	top=push(top,20);
	top=push(top,30);
	top=push(top,40);
	traversal(top);
	int element=pop(&top);
	printf("\nPopped element is : %d",element);
	traversal(top);
}
