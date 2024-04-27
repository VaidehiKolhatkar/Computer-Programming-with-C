//to covert temperature from centigrade to fahrenheit
#include<stdio.h>
void main()

{
	float cen, fah;

	
	printf("enter the value in degree centigrade");
	scanf("%f", &cen);

    fah=(1.8*cen)+32;
    
	printf("the value of temperature in degree fahrenheit is %f",fah);
	
}
