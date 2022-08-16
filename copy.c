#include<stdio.h>
int main()
{
	int a[100],b[100];
	int i,n;
	int sum=0;
	printf("Enter array Range:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	

	for(i=0;i<n;i++)
	{
	    b[i]=a[i];
	}
		printf(" B Array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	
	
	
	
	return 0;
}
