#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * pre;
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
void LinkedListTraversalrev(struct Node*p)
{
	int i=4;
	while(p!=NULL)
	{
		printf("Element %d = %d\n",i,p->data);
		i--;
		p=p->pre;
	}
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
	head->pre=NULL;
	second->data=20;
	second->next=third;
	second->pre=head;
	third->data=30;
	third->next=forth;
	third->pre=second;
	forth->data=40;
	forth->pre=third;
	forth->next=NULL;
	printf("\nThe elements in the linked list are :\n");
	LinkedListTraversal(head);
	printf("\nThe elements in the linked list in reverse order :\n");
	LinkedListTraversalrev(forth);
}
