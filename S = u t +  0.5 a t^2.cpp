#include<stdio.h>
int main()
{
	float S,u,a,t;
	printf("Enter the value of u :");
	scanf("%f",&u);
	printf("Enter the value of a :");
	scanf("%f",&a);
	printf("Enter the value of t :");
	scanf("%f",&t);
	S=u*t+(1/2)*a*t*t;
	printf("The value of S is :%f",S);
	return 0;
}
