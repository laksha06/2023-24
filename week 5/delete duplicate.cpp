#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if (a[i]==a[j])
				{
					for(k=j;k<n-1;k++)
						a[k]=a[k+1];
					n--;
					j--;
				}
			}
		}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}
	
