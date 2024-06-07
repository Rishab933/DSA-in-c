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
struct Node * insertionATindex(struct Node * p,int data,int index)
{
	struct Node *x=p;
	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	int i=0;
		while(i!=index-1)
	{
		x=x->next;
		i++;
	}
	ptr->next=x->next;
	x->next=ptr;
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
	int position;
	printf("\nEnter the index: ");
	scanf("%d",&position);
	head=insertionATindex(head,50,position);
	printf("\nThe elements in the linked list after insertion are:\n");
	LinkedListTraversal(head);
}
