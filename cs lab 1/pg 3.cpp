#include<stdio.h>
int main()
{
	int a;
	printf("enter the number of units");
	scanf("%d",&a);
	if (a<100)
		printf("the bill amt is %d",a*2);
	if (a>100 && a<200)
		printf("the bill amt is %f",a*3.5);
	if (a>200)
		printf("the bill amt is %d",a*5);
	return 0;
}
