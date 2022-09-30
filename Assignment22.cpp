/*Write a program to input a number. if the number is even, print its square otherwise
print its cube.*/
#include<stdio.h>
int main()
{
	int a;
	
	printf("\n Enter the value of a:");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("\n Square = %d",a*a);
	}
	else
	{
		printf("\n Cube = %d",a*a*a);
	}
}
