#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("enter the no of rows:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			for(s=0;s<n-i-1;s++)
				printf(" ");
			for(j=0;j<2*i+1;j++)
				printf("*");
			printf("\n");
		}
	n--;
	for (i=0;i<n;i++)
		{
			printf(" ");
			for(s=0;s<i;s++)
				printf(" ");
			for(j=0;j<2*(n-i-1)+1;j++)
				printf("*");
			printf("\n");
		}
	return 0;
}
