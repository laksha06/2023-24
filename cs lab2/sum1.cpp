#include<stdio.h>
int main()
{
	int N,i,a,b=0;
	scanf("%d",&N);
	a=N;
	for(i=0;N!=0;i++);
		N=N/10;
	for(;i>0;i--,a/=10)
	 {
	 b+=(a%10);
	 }
	printf("%d",b);
	return 0;
}
