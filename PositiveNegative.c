#include<stdio.h>
int main()
{
	int a[5],o[5],e[5];
	int i,j,oc,ec,n;
	
	printf("Enter array Range:\n");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

		oc=0;ec=0;
	for(i=0;i<n;i++)
	{
	
		if(a[i]>=0)
		{
		   o[oc]=a[i];
		   oc++;	
		}
		else
		{
			e[ec]=a[i];
			ec++;
		}
	}
	printf("Positive elements:");
	for(i=0;i<oc;i++)
	   printf("\nElement %d = %d ",i+1,o[i]);
	   
	printf("\nNegative elements:");
	for(i=0;i<ec;i++)
	   printf("\nElement %d = %d ",i+1,e[i]);   
	return 0;
}
