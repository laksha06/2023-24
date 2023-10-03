#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int b=1;
	int s=0;
	for(int i=3;i<=n;i++)
		{
		s=a+b;
		a=b;
		b=s;
		}
	printf("%d",b);
	return 0;
}
