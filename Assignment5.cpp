/*Write a program to input radius and calculate the area and circumference of a 
circle.*/
#include<stdio.h>
int main()
{
	int r;
	float area, circumference, pi=3.14;
	
	printf("\n Enter Radius of Circle :");
	scanf("%d",&r);
	
	area=pi*r*r;
	printf("\n Area of Circle =%.2f",area);
	
	circumference=2*pi*r;
	printf("\n Circumference of Circle =%.2f",circumference);
	
}
