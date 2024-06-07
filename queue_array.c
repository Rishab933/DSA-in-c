#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size;
	int f;
	int r;
	int* arr;
};
int isEmpty(struct queue *q){
    
	if(q->f==q->r){
		return 1;
	}
	else
	return 0;
}
int isFull(struct queue *q){
	if(q->r==q->size-1){
		return 1;
	}
	else
	return 0;
}
void enqueue(struct queue *q,int a){
	if(isFull(q)){
		printf("\nqueue overflow");
	}
	else{
		q->r++;
		q->arr[q->r]=a;
		printf("\nThe enqueued value is %d ",a);
	}
}
int dequeue(struct queue*q)
{
    
	int a=-1;
	if(isEmpty(q))
	{
		printf("\nqueue underflow");
	}
	else
	{
		q->f++;
		a=q->arr[q->f];
		return a;
	}
}
void show(struct queue*q)
{
	int c=1;
	int i;
	for(i=q->r;i>q->f;i--)
	{
		printf("\nElement %d : %d",c,q->arr[i]);
		c++;
	}
}
int main()
{
	struct queue s;
    s.size = 4;
    s.f = s.r = -1;
    s.arr = (int*) malloc(s.size*sizeof(int));
	enqueue(&s,10);
	enqueue(&s,20);
	enqueue(&s,30);
	enqueue(&s,40);
 	show(&s);
 	printf("\nDequeing element %d",dequeue(&s));
 	show(&s);
}
