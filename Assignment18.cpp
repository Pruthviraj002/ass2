/*Write a program to find out Area of Triangle.*/
#include<stdio.h>
int main()
{
	//area=(h*b)/2
	int h,b;
	int area;
	
	printf("\n Enter height of triangle :");
	scanf("%d",&h);
	
	printf("\n Enter base of triangle :");
	scanf("%d",&b);
	
	area=(h*b)/2;
	
	printf("\n Area of Rectangle = %d",area);
}
