/*Write a program to find wheather a given number is even or odd using conditional 
operator.*/
#include<stdio.h>
int main()
{
	int a;
	
	printf("\n Enter any integer :");
	scanf("%d",&a);
	
	a%2==0?printf("\n %d is even.",a):printf("\n %d is odd.",a);
}
