#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * next;
};
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
	printf("\nThe elements in the linked list are:\n");
	struct Node * p=head;
	int i=1;
	while(p!=NULL)
	{
		printf("Element %d = %d\n",i,p->data);
		i++;
		p=p->next;
	}
}
