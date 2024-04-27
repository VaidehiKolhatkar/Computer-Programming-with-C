//to find area and circumference of a circle
#include<stdio.h>
void main()

{
    float rad, area, crm;
	
	printf("enter the value of radius");
	scanf("%f", &rad);

	crm= 2*3.14*rad;
	area= 3.14*rad*rad;
	
	printf("the circumference is %f",crm);
	printf("the area is %f",area);
	
}
