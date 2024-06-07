#include<stdio.h>
#include<string.h>

void rev(char *s)
{
	int i,l;
	int temp;
	l=strlen(s);
	for(i=0;i<l/2;i++)
	{
	temp=s[i];
	s[i]=s[l-i-1];
	s[l-i-1]=temp;
	}
}
int main(){
	char a[50];
	printf("\nEnter the string ");
	gets(a);
	printf("\nThe string is %s",a);
	rev(a);
	printf("\nThe string is %s",a);
}

