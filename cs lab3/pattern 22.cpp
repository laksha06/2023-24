#include<stdio.h>
int main()
{
	int i,j,n,a;
	printf("enter:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			for(j=0;j<i;j++)
				{
					if(j==i-1)
					printf("%d",i);
					else 
					printf("%d*",i);
				}
			printf("\n");
		}
	a=n;
	for (i=0;i<n;i++,a--)
		{
			for(j=0;j<n-i;j++)
			{
					if(j+i==(n-1))
					printf("%d",a);
					else 
					printf("%d*",a);
			}
				
			printf("\n");
		}
	return 0;
}
