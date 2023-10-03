#include<stdio.h>
int main()
{
	int i,j,n,s,k;
	printf("enter:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			for(s=0;s<i+1;s++)
				printf("*");
			for(j=0;j<2*(n-i-1);j++)
				printf(" ");
			for(k=0;k<i+1;k++)
				printf("*");
			printf("\n");
		}
	for (i=0;i<n;i++)
		{
			for(s=0;s<n-i;s++)
				printf("*");
			for(j=0;j<2*i;j++)
				printf(" ");
			for(k=0;k<n-i;k++)
				printf("*");
			printf("\n");
		}
		
	return 0;
	
}
