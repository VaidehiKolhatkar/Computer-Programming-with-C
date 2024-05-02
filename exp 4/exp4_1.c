//to find sum and average of elements in an array
#include<stdio.h>
int main()
{
	int a[5],i,n,sum=0;
	float avg;
	
	printf("enter the number of elements");
	scanf("%d",&n);
	
	printf("enter the elements\n");
	for(i=0; i<n; i++)
	scanf("%d",&a[i]);
	
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	
	printf("the sum of the elements in an array is %d\n",sum);
	
	avg = (float)sum / n;
	
	printf("the average of the elements is %f",avg);
}
