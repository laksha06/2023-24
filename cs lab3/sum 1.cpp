#include<stdio.h>
int main()
{
	int N,i,a,b=0;
	scanf("%d",&N);
	a=N;
	while(N!=0)
		{
			i=N%10;
			N=N/10;
			b+=i;
		}
	printf("%d",b);
	return 0;
}
