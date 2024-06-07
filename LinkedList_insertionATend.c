#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * next;
};
void LinkedListTraversal(struct Node*p)
{
	int i=1;
	while(p!=NULL)
	{
		printf("Element %d = %d\n",i,p->data);
		i++;
		p=p->next;
	}
}
struct Node * insertionATlast(struct Node * p,int data)
{
	struct Node *x=p;
	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
		while(x->next!=NULL)
	{
		x=x->next;
	}
	x->next=ptr;
	ptr->next=NULL;
	return p;
}
int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * forth;
	head=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	forth=(struct Node *)malloc(sizeof(struct Node));
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=forth;
	forth->data=40;
	forth->next=NULL;
	printf("\nThe elements in the linked list before insertion are:\n");
	LinkedListTraversal(head);
	head=insertionATlast(head,50);
	printf("\nThe elements in the linked list after insertion are:\n");
	LinkedListTraversal(head);
}
