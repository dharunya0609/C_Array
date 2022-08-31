#include <stdio.h>

int main()
{
	int Size, i, arrSum = 0;
	float arrAvg = 0;

	printf("Please Enter the Array size = ");
	scanf("%d", &Size);

	int arr[Size];

	printf("Enter the Array Items = ");
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
		arrSum = arrSum + arr[i];
	}

	arrAvg = (float)arrSum / Size;

	printf("\nThe Sum of Array Items     = %d\n", arrSum);
	printf("The Average of Array Items = %.2f\n", arrAvg);

	printf("\nThe Array Items Greater Than The Average = ");

	for (i = 0; i < Size; i++)
	{
		if(arr[i] > arrAvg)
		{
			printf("%d  ", arr[i]);
		}
	}
	printf("\n");
}
