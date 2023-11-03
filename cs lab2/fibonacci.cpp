#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int b=1;
	int s=0;
	printf("%d\n%d\n",a,b);
	for(int i=3;i<=n;i++)
		{
		s=a+b;
		a=b;
		b=s;
		printf("%d\n",b);
		}
	return 0;
}
