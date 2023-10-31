#include<stdio.h>
int main()
{
	int n,i,t;
	printf("enter the no of elements in the even array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	printf("the modifed array is:");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}
