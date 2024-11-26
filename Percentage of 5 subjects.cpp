#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,t;
	printf("Enter the Marks of First subject:");
	scanf("%f",&m1);
	printf("Enter the Marks of Second subject:");
	scanf("%f",&m2);
	printf("Enter the Marks of Third subject:");
	scanf("%f",&m3);
	printf("Enter the Marks of Fourth subject:");
	scanf("%f",&m4);
	printf("Enter the Marks of Fifth subject:");
	scanf("%f",&m5);
	t=(m1+m2+m3+m4+m5)/5;
	printf("The Percentage of marks in Five subject is :%f",t,"%");
	return 0;
}
