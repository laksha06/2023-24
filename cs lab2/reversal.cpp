#include<stdio.h>
#include<math.h>
int main()
{
	int N,i,a,b=0,c;
	scanf("%d",&N);
	a=N;
	for(i=0;N!=0;i++)
		N=N/10;
	i-=1;
	for(;i>=0;i--,a/=10)
		{
		c=a%10;
		b+=(c*pow(10,i));
		}
	printf("%d",b);
	return 0;
}
