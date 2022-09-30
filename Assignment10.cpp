/*Write a program to input the number the days from the user and convert it into years,
weeks and days.*/
#include<stdio.h>
int main()
{
	int days,weeks,years;
	
	printf("\n Enter the days:");
	scanf("%d",&days);
	
	weeks=days/7;
	printf("\n %d days=%d weeks",days,weeks);
	
	years=days/365;
	printf("\n %d days=%d years",days,years);
	
}
