#include<stdio.h>
int main()
{
	int b,c;
	scanf("%d%d",&b);
	printf("enter region");
	if (b==1)
		c=b*0.27;
	else if (b==2)
    	c=b*0.24;
	else if (b==3)
		c=b*0.16;
	else (b==4)
		c=b*0.12;		
	printf("the salary is %f ",b+c+(0.48*b)+(b*0.08));
	return 0;
}
