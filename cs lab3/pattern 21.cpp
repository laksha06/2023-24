#include<stdio.h>
int main()
{
	int i,j,n,a,b;
	scanf("%d%d",&a,&n);
	b=a;
	for (i=0;i<n;i++,a++)
		{
			for(j=0;j<i+1;j++)
				printf("%d",a);
			printf("\n");
		}
	a=b+n-1;
	for (i=0;i<n;i++,a--)
		{
			for(j=0;j<n-i;j++)
				printf("%d",a);
			printf("\n");
		}
	return 0;
}
