#include<stdio.h>
int main()
{
	int a[5];
	int i,j,n,cnt=0;
	printf("Enter array size:\n");
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
	   	 if(a[i]==a[j])
	   	 {
	   	   	cnt++;
	   	   	break;
		 }
	   }
	   
	   
	}
	   	    printf("No. of duplicate Elements is  %d",cnt);	
		 
	
	return 0;
}
