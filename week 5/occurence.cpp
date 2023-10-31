#include<stdio.h>
int main()
{
	int n,i,j,t=0,k;
	printf("enter the number to search:");
	scanf("%d",&k);
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if (a[i]==k)
		t++;
	}
	printf("%d is the occurence of the number",t);
}
