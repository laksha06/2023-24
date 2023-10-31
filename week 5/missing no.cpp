#include<stdio.h>
int main()
{
	int n,i,t=0;
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n-1];
	printf("enter the elements of the array:");
	for(i=0;i<n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		t+=a[i];
	printf("the missing value is %d",(n*(n+1))/2-t);
	return 0;
}
