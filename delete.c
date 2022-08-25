#include<stdio.h>
int main()
{
	int a[5];
	int i,j,n,cnt=0,pos;
	printf("Enter array size:\n");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("Enter position:\n");
	scanf("%d",&pos);
	
	if(pos<0 || pos>=n)
	   printf("Enter a valid position range between 0-%d",n-1);
	else
	{
		for(i=pos;i<n;i++)
		{
			a[i]=a[i+1];
		}
		n--;
	}
	
    for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	
	}
	return 0;
}
