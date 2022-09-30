/*Write a program to input principle, rate and time form the user and
 calculate the simple interest and total amount. Display all this values.*/
 #include<stdio.h>
 int main()
 {
 	int p,r,t,i,total;
 	
 	printf("\n Enter Principle Amount:");
 	scanf("%d",&p);
 	
 	printf("\n Enter Rate of Interest :");
 	scanf("%d",&r);
 	
 	printf("\n Enter Time Period:");
 	scanf("%d",&t);
 	
 	i=p*r*t/100;
 	total=p+i;
 	printf("\n Principle Amount = %d",p);
	printf("\n Rate of Interest = %d",r);
	printf("\n Time Period = %d",t);
	
	printf("\n Simple Interest = %d",i);
	
	printf("\n Total Amount = %d",total);
	
 	
 	
 	
 }
