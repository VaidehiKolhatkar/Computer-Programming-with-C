//to fing the sum of two matrices
#include<stdio.h>
void main()
{
	int i,j,a[i][j],b[i][j],c[i][j],r1,c1,r2,c2;
	
	printf("enter the number of rows and columns in matrix a");
	scanf("%d%d",&r1,&c1);
	
	printf("enter the elements in matrix a\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the number of rows and columns in matrix b");
	scanf("%d%d",&r2,&c2);
	
	printf("enter the elements in matrix b\n");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("enter the number of rows and columns in matrix c");
	scanf("%d%d",&r1,&c2);
	
	if((r1==r2) && (c1==c2))
	{
		for(i=0; i<r1; i++)
    	{
			for(j=0; j<c2; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
	    }
	
		printf("sum of matrices a and b is\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				printf("%d ",c[i][j]);
			}
		   		printf("\n");
		}
    }
		
	else
	{
		printf("rows and columns of matrices are not equal\n");
	}
}
