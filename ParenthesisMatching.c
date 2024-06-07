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
void push(char a[],char p)
{
	if(isFull()){
		printf("Stack overflow\n");
	}
	else{
		top=top+1;
		a[top]=p;
	}
}
char pop(char a[]){
	if(isEmpty()){
	printf("Stack underflow\n");
	}
	else{
		char f=a[top];
		top=top-1;
		return f;
		
	}
}
int parenthesismatch(char a[]){
    
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='('){
			push(a,'(');
			printf("Element pushed");
		}
		else if(a[i]==')')
		{
			if(isEmpty(a)){
				return 0;
			}
			pop(a);
				printf("Element popped");
		}
		
    }
    	if(isEmpty(a)){
        return 1;
    }
    else{
       return 0;
    }
}

int main()
{
	char a[6]="8*(9)";
	n=6;
	if(parenthesismatch(a)){
		printf("\nThe parenthesis is matching");
	}	
	else{
		printf("\nThe parenthesis is not matching");
	}
}
