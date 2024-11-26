#include<stdio.h>
int main()
{
	int a,b ;
	printf("Enter the First number:");
	scanf("%d",&a);
	printf("Enter the Second number:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The First number is :%d\n",a);
	printf("The Second number is :%d",b);
	return 0;
}

