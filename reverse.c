#include<stdio.h>
int main()
{
	int a[5];
	int i,j,n,temp;
	printf("Enter array size:\n");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

    printf("Original array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	 printf("\nReversed array:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
		
	return 0;
}
