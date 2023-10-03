#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("enter the no of rows:");
	scanf("%d",&n);
	for (i=1;i<n+1;i++)
		{
			for(s=0;s<n-i+1;s++)
				printf(" ");
			for(j=0;j<i;j++)
				printf("%d ",i);
			printf("\n");
		}
	return 0;
}
