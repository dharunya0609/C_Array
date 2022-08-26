#include<stdio.h>
int main()
{
	int a[5],f[5];
	int i,j,n,cnt=0;
	printf("Enter array size:\n");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		f[i]=-1;
	}
	
	
	for(i=0;i<n;i++)
	{
		cnt=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cnt++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=cnt;
		}
	}
    printf("unique elements are :\n");
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
		{
			printf("%d ",a[i]);
		}
		
	}

		
	return 0;
}
