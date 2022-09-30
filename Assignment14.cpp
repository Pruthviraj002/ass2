/*Write a program to find out the quotient and remainder of two numbers.(Without using 
modulus(%) operator)*/
#include<stdio.h>
int main()
{
	int quotient,remainder,a,b;
	
	printf("\n Enter values of a,b:");
	scanf("%d%d",&a,&b);
	
	quotient=a/b;
	printf("\n Quotient=%d",quotient);
	
	remainder=a%b;
	printf("\n Remainder=%d",remainder);
}
