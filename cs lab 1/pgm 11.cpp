#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r,n;
	printf("enter principal value,time, rate of interest and no of time periods elapsed");
	scanf("%d%d%d%d",&p,&t,&r,&n);
	printf("the simpple interest is %d",p*t*r/100);
	printf("the compound interest is %f",p*pow((1+(r/n)),n*t));	
	return 0;
}
