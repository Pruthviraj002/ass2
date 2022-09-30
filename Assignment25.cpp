/*Write a program to input two numbers and perform swapping*/
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("\n Enter value of a :");
	scanf("%d",&a);
	
	printf("\n Enter value of b :");
	scanf("%d",&b);
	
	printf("\n Before Swapping.");
	printf("\n a=%d \t b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n After Swapping.");
	printf("\n a=%d \t b=%d",a,b);
}
