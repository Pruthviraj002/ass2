/*Write a program to input width and height of a rectandgle and calculate the 
area and perimeter.*/
#include<stdio.h>
int main()
{
	int width,height,Area,perimeter;
	
	printf("\n Enter Width of rectangle :");
	scanf("%d",&width);
	
	printf("\n Enter height of rectangle :");
	scanf("%d",&height);
	
	Area=width*height;
	printf("\n Area of Rectangle : %d",Area);
	
	perimeter=2*width+2*height;
	printf("\n Perimeter of Rectangle = %d",perimeter);	
 } 
