#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf("Enter array Range:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Array elements are:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
	
	
	return 0;
}
