//to find the product of two matrices 
#include<stdio.h> 
void main() 
{ 
	int i, j, k, r1, r2, c1, c2;
	int a[10][10], b[10][10], c[10][10];
 
	printf("enter the number of rows and columns in matrix a\n");
	scanf("%d%d", &r1, &c1);
 
 	printf("enter the number of rows and columns in matrix b\n");
	scanf("%d%d", &r2, &c2);
 
	printf("enter the elements in matrix a\n");
	for(i=0; i<r1; i++)
 	{ 
		for(k=0; k<c1; k++)
 		{ 
 			scanf("%d",&a[i][k]);
 		} 
 	} 
 
 	printf("enter the elements in matrix b\n");
	for(k=0; k<r2; k++)
 	{ 
 		for(j=0; j<c2; j++)
 		{ 
 			scanf("%d",&b[k][j]);
 		} 
	} 
 
 	for(i=0; i<r1; i++)
 	{ 
 		for(j=0; j<c2; j++)
 		{ 
 			c[i][j]=0;
 		} 
 			printf("\n");
 	} 
 
 
 	for(i=0; i<r1; i++)
 	{ 
 		for(j=0; j<c2; j++)
 		{ 
 			for(k=0; k<c1; k++)
 			{ 
 				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			} 
 		} 
 				printf("\n");
 	} 
 	
 	printf("the matrix a is\n");
 	for(i=0; i<r1; i++)
 	{ 
 		for(k=0; k<c1; k++)
 		{ 
 			printf("%d\t",a[i][k]);
 		} 
 			printf("\n");
 	} 
 
 	printf("\nthe matrix b is\n");
	for(k=0; k<r2; k++)
 	{ 
 		for(j=0; j<c2; j++)
 		{ 
 			printf("%d\t",b[k][j]);
 		} 
 			printf("\n");
 	} 
 
 	printf("\nthe product of matrix is\n");
	for(i=0; i<r1; i++)
 	{ 
 		for(j=0; j<c2; j++)
 		{ 
 			printf("%d\t", c[i][j]);
 		} 
 			printf("\n");
	}
}
