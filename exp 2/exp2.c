//to print fibonacci series for given number of elements
#include<stdio.h>
int main()
{
	int n, a=0, b=1, c, i=1;
	
	printf("enter the number of terms");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d ",a);
		
		c = a + b;
		a = b;
		b = c;
		
		i++;
	}
}
