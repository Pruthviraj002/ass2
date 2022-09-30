/*Write a program to input roll number, name, and marks of a student in 5 subjects and 
calculate the total the total and average marks. Display all the values.*/
#include<stdio.h>
int main()
{
	int rollno;
	char name[20];
	int s1,s2,s3,s4,s5;
	int total;
	float avg;
	
	printf("\n Enter student Roll No :");
	scanf("%d",&rollno);
	
	printf("\n Enter student Name :");
	scanf("%s",&name);
	
	printf("\n Enter five subject marks :");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	
	total=s1+s2+s3+s4+s5;
	printf("\n Total Marks = %d",total);
	
	avg=total/5;
	
	printf("\n Average marks = %.2f",avg);
}
