#include<stdio.h>
#include<math.h>
int main()
{
	float E,m,g,h,v;
	printf("Enter the value of mass :");
	scanf("%f",&m);
	printf("Enter the value of gravity :");
	scanf("%f",&g);
	printf("Enter the value of height :");
	scanf("%f",&h);
	printf("Enter the value of velocity :");
	scanf("%f",&v);
	E=m*g*h+0.5*m*v*v;
	printf("The value of Mechanical Energy is :%f",E);
	return 0;
}
