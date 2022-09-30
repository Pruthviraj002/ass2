/*Write a program to input inches form the user and convert it into yards, feet.*/
#include<stdio.h>
int main()
{
	int inch;
	float yards,feet;
	
	printf("\n Enter value in inches :");
	scanf("%d",&inch);
	
	yards=inch*0.02777;
	printf("\n %d inches=%.2f yards",inch,yards);
	
	feet=inch*0.08333;
	printf("\n %d inches=%.2f feets",inch,feet);
}
