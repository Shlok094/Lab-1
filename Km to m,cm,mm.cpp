#include<stdio.h>
int main()
{
	float a;
	printf("Enter the length in kilometers :");
	scanf("%f",&a);
	printf("The length in meters is :%f\n",a*1000,"m");
	printf("The length in centimeters is :%f\n",a*100000,"cm");
	printf("The length in millimeters is :%f",a*1000000,"mm");
	return 0;
}
