#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			for(j=0;j<i;j++)
				printf("%d",i);
			printf("\n");
		}
	for (i=0;i<n;i++)
		{
			for(;j<n-i;j--)
				printf("%d",j);
			printf("\n");
		}
	return 0;
}
