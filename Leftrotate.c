#include<stdio.h>

void PrintArray(int a[], int Size) 
{		
 	for(int i = 0; i < Size; i++)  	
    {
        printf("%d  ", a[i]);
    }
} 

int main()
{
    int Size, i, j, num, temp;

    printf("Please Enter the Size of an Array = ");
    scanf("%d", &Size);

    int a[Size];

    printf("Please Enter the Array Elements = ");
    for(i = 0; i < Size; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    printf("\nNumber of Times to Left Rotate an Array = ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) 
    {
        temp = a[0];
        for(j = 0; j < Size - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[Size - 1] = temp;
    }
    
    printf("\nArray Elements After Left Rotating Array  :  ");
    PrintArray(a, Size);
    return 0;
}
