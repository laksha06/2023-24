#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("enter the no of rows:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			for(j=0;j<n-i;j++)
				{
				printf("%d ",k);
				k++;
			    }
			printf("\n");
		}
	return 0;
}
