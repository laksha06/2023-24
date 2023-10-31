#include<stdio.h>
int main()
{
	int n,i,t;
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<(n+1)/2;i++)
		{
			t=a[i];
			a[i]=a[n-i-1];
			a[n-i-1]=t;
		}
	printf("the reversed array is:");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}
