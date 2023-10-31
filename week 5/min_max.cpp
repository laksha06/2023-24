#include<stdio.h>
int main()
	{
		int a[7]={2,5,1,7,9,4,3};
		int min=a[0],max=a[0];
		for (int i=0;i<7;i++)
		{
		if (a[i]<min)
		min=a[i];
		if (a[i]>max)
		max=a[i];
		}
	printf("the minimum value is %d\n",min);
	printf("the maximum value is %d\n",max);
	printf("the average value is %d",(min+max)/2);
	return 0;
	}
