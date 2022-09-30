/*Write a program to input a number and print its cube*/
#include<stdio.h>
int main()
{
	int num,cube;
	
	printf("\n Enter any integer :");
	scanf("%d",&num);
	
	cube=num*num*num;
	printf("\n Cube of %d is = %d",num,cube);
}
