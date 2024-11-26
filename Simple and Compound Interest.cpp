#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,s,c;
	printf("Enter the Principal Amount :");
	scanf("%f",&p);
	printf("Enter the Rate of interest :");
	scanf("%f",&r);
	printf("Enter the Time period(yrs) :");
	scanf("%f",&t);
	s=(p*r*t)/100;
	c=p*pow(1+r/100,t);
	printf("Simple Interest is :%f",s);
	printf("Compound Interest is :%f",c);
	return 0;
}
