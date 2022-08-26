#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i,j,n,temp;
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
    printf("------Before swapping------");
    printf("\nArray 1 elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nArray 2 elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+b[i];
		b[i]=a[i]-b[i];
		a[i]=a[i]-b[i];
		
	}
    printf("------After swapping------");
    printf("\nArray 1 elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nArray 2 elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}

		
	return 0;
}
