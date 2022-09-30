/*Write a program to input roll number, name, marks and phone of a student and display
the values.*/
#include<stdio.h>
int main()
{
	int roll;
	char name[20];
	int marks;
	int phone;
	
	printf("\n Enter Roll Number of Student :");
	scanf("%d",&roll);
	
	printf("\n Enter Name of Student :");
	scanf("%s",&name);
	
	printf("\n Enter Marks :");
	scanf("%d",&marks);
	
	printf("\n Enter Phone Number of Student :");
	scanf("%d",&phone);
	
	printf("\n Roll no of Student=%d",roll);
	printf("\n Name of Student:%s",name);
	printf("\n Marks:%d",marks);
	printf("\n Phone NO=%d",phone);
}
