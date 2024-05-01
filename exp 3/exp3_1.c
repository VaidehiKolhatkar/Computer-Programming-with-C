//to find factorial of a number
#include<stdio.h>
int main()
{
	int n, fact = 1;
	
	printf("enter n");
	scanf("%d",&n);
	
	while(n>0)
	{
		fact = fact*n;
		n--;
	}
	
	printf("the factorial is %d",fact);
}
