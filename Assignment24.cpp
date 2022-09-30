/*Write a program to input the temprature in fahrenheit convert it into celsius & 
viceversa*/
#include<stdio.h>
int main()
{
	float fh,cl;
	int choice;	
	
	
	printf("\n n1: Convert temprature from fahrenheit to celsius:");
	
	printf("\n n2: Convert temprature from celsius to fahrenheit:");
	
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	
	if(choice==1)
	{
	/* Convert temperature from fahrenheit to celsius*/
	printf("\n Enter temperature in fahrenheit:");
	scanf("%f",&fh);
	cl=(fh-32)/1.8;
	printf("\n temperature in celsius = %.2f",cl);
	}
	else if(choice==2)
	{
	/*convert temperature from celsius to fahrenheit*/
	printf("\n\n Enter temperature in Celsius:");
	scanf("%f",&cl);
	fh=(cl*1.8)+32;
	printf("\n temperature in fahrenheit = %.2f",fh);
    }
}
