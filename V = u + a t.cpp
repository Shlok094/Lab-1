#include<stdio.h>
int main()
{
	float V,u,a,t;
	printf("Enter the value of u :");
	scanf("%f",&u);
	printf("Enter the value of a :");
	scanf("%f",&a);
	printf("Enter the value of t :");
	scanf("%f",&t);
	V=u+a*t;
	printf("The value of V is :%f",V);
	return 0;
}
