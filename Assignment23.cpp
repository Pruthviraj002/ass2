/*Write a program to input employee code, name and basic salary of an empleyee and 
calculate the following values:
HRA 			40% of basic salary 		Da			 10% of basic salary
CCA				5%of basic salary			Gs			 Basic + HRA + DA + CCA
PF				10%of GS					IT			 10% of GS
NS				GS-(PF+IT)*/
#include<stdio.h>
int main()
{
	int ecode;
	char ename[20];
	float bsal,BS,HRA,DA,CCA,GS,PF,IT,NS;
	
	printf("\n Enter employee code:");
	scanf("%d",&ecode);
	
	printf("\n Enter employee name:");
	scanf("%s",&ename);
	
	printf("\n Enter employee basic salary:");
	scanf("%f",&bsal);
	
	HRA=bsal*0.4;
	printf("\n HRA=%.2f",HRA);
	
	DA=bsal*0.1;
	printf("\n DA=%.2f",DA);
	
	CCA=bsal*0.5;
	printf("\n CCA=%.2f",CCA);
	
	GS=bsal+HRA+DA+CCA;
	printf("\n GS=%.2f",GS);
	
	PF=GS*0.1;
	printf("\n PF=%.2f",PF);
	
	IT=GS*0.1;
	printf("\n IT=%.2f",IT);
	
	NS=GS-(PF+IT);
	printf("\n NS=%.2f",NS);
}
