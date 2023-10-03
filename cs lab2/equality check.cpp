#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && a==c)
		printf("equal");
	else
		printf("not equal");
	return 0;
}
