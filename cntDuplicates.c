#include<stdio.h>
int main()
{
	int a[100];
	int i,n,j;
	int cnt=0;
	printf("Enter array Range:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if( a[i]==a[j])
			{
				cnt++;
			}
		}
	}
	printf("No.of duplicate Array elements are: %d",cnt);
	
	
	return 0;
}
