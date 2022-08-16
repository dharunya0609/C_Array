#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	int sum=0;
	printf("Enter array Range:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Array elements are:");
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf(" sum of array is %d ",sum);
	
	
	
	return 0;
}
