#include<stdio.h>
int main()
{
	int a,b,c ;
	printf("Enter the First number:");
	scanf("%d",&a);
	printf("Enter the Second number:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("The First number is :%d\n",a);
	printf("The Second number is :%d",b);
	return 0;
}
	
	
