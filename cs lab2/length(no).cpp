#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	for(i=0;N!=0;i++)
		N=N/10;
	printf("%d",i);
	return 0;
}
