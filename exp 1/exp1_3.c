//check if the number is even or odd
#include<stdio.h>
void main()
{
	int num;
	
	printf("enter the number");
	scanf("%d", &num);
	
	if(num%2==0)	
  {
    printf("the even number",num);
  } 
   else
    printf("the odd number",num);	
}
