#include<stdio.h>
int main()
{
	int a[5],b[5],c[5];
	int i,j,n1,n2,n;
	
	printf("Enter array 1 Range:\n");
	scanf("%d",&n1);
	printf("Enter array 2 Range:\n");
	scanf("%d",&n2);
	
	printf("Enter array 1 elements:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter array 2 elements:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	n=n1+n2;
	for(i=0,j=n1;i<n2,j<n;i++,j++)
	{
		c[j]=b[i];
	}
	for(i=0;i<n;i++)
	   printf("\nElement %d = %d ",i+1,c[i]);
	return 0;
}
