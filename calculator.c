#include<stdio.h>
void add(int a,int b){
	int sum=0;
	sum=a+b;
	printf("\nThe sum is %d",sum);
}
void sub(int a,int b){
	int subt=0;
	if(a>b)
	{
		subt=a-b;
	}
	else{
		subt=b-a;
	}
		printf("\nThe difference is %d",subt);
}
void mult(int a,int b){
	int mult=1;
	mult=a* b;
		printf("\nThe product is %d",mult);
}
void div(int a,int b){
	int divd=1;
	divd=a/b;
		printf("\nThe quotient is %d",divd);
}
int main(){
	int i;
	int a,b;
	while(1){
	printf("\nMenu");
	printf("\nPress 1 for addition");
	printf("\nPress 2 for subtraction");
	printf("\nPress 3 for multiplication");
	printf("\nPress 4 for division");
	printf("\nEnter 5 for exit ");
	printf("\nEnter choice ");
	scanf("%d",&i);
	if(i == 5){
		break;
	}

	printf("\nEnter the first number");
	scanf("%d",&a);
	printf("\nEnter the second number");
	scanf("%d",&b);
	
	switch(i)
	{
	case 1:
	add(a,b);
	break;
	case 2:
	sub(a,b);
	break;
	case 3:
	mult(a,b);
	break;
	case 4:
	div(a,b);
	break;
	default:
	printf("\nWrong choise");
			}
			
		}
	}
