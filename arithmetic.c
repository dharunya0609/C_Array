#include<stdio.h>
int main()
{
	int a[5],b[5],sum[5],sub[5],mul[5],div[5];
	int i,j,n;
	printf("Enter array size:\n");
	scanf("%d",&n);
	
	printf("Enter array 1 elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter array 2 elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
	   sum[i]=a[i]+b[i];
	   sub[i]=a[i]-b[i];
	   mul[i]=a[i]*b[i];
	   div[i]=a[i]/b[i];
	}
	
	printf("After addition:");
	for(i=0;i<n;i++)
	   printf("%d ",sum[i]);
	printf("After subtraction:");
	for(i=0;i<n;i++)
	   printf("%d ",sub[i]);  
	printf("After multiplication:");
	for(i=0;i<n;i++)
	   printf("%d ",mul[i]);  
    printf("After division:");
	for(i=0;i<n;i++)
	   printf("%d ",div[i]);  
	
	
	return 0;
}
