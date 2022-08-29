#include<stdio.h>
 
int main()
{
 	int rows, columns;
	
	int a[2][2] = {{10, 20}, {30, 70}};

	printf("\nPrinting the 2D Array\n");
 	for(int rows = 0; rows < 2; rows++)
  	{
  		for(int columns = 0; columns < 2; columns++)
  		{
  			printf("%d  ", a[rows][columns]);
		}
   		printf("\n");
  	}  	

 	return 0;
} 
