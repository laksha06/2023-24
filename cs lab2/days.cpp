#include<stdio.h>
int main()
{
	int a,b;
	printf("enter year:");
	scanf("%d",&b);
	printf("enter month:");
	scanf("%d",&a);
	if (a==1)
		printf("31");
	if (a==2)
		if (b%4==0 && (b%100!=0||b%4==0))
			printf("29");
		else
			printf("28");
	else if (a==3)
		printf("31");
	else if (a==4)
		printf("30");
	else if (a==5)
		printf("31");
	else if (a==6)
		printf("30");
	else if (a==7)
		printf("31");
	else if (a==8)
		printf("31");
	else if (a==9)
		printf("30");
	else if (a==10)
		printf("31");
	else if (a==11)
		printf("30");
	else if (a==12)
		printf("31");
	else
		printf("invalid");
	return 0;
}
