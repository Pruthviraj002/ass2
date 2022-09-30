/*Write a program to find out the greatest of three numbers using conditional 
operator.*/
#include<stdio.h>
int main()
{
	int a, b, c, greatest ;
 
    printf("\n Enter three numbers a,b,c: ") ;
    scanf("%d %d %d", &a, &b, &c) ;
 
    greatest = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\n The biggest number is : %d", greatest) ;
}
