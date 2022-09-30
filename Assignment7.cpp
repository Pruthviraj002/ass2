/*Write a program to input 4 integers a, b, c, d and check that the equation 
3*a+3*b+3*c=3*d is satisfied or not.*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	
	printf("\n Enter the values of a,b,c,d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	e=3*a+3*b+3*c;
	f=3*d;
	
	if(e==f)
	{
		printf("\n The Equation is satisfied.");
	}
	else
	{
		printf("\n The Equation is not satisfied.");
	}
	
}
