#include<stdio.h>
int main()
{
	int n,i,j,t,k;
	printf("enter the value of k:");
	scanf("%d",&k);
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("k th smallest is %d and k th largest is %d ",a[k-1],a[n-k]);
	return 0;
}
