#include<stdio.h>
#include<math.h>
int main()
{
	float T,a,b,c;
	printf("Enter the value of a :");
	scanf("%f",&a);
	printf("Enter the value of b :");
	scanf("%f",&b);
	printf("Enter the value of c :");
	scanf("%f",&c);
	T=2*a+sqrt(b)+9*c;
	printf("The value of T is :%f",T);
	return 0;
}
