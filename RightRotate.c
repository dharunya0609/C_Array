#include<stdio.h>

void PrintArray(int a[], int Size) 
{		
 	for(int i = 0; i < Size; i++)  	
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
} 

int main()
{
    int size, i, j, a[10], num, temp;

    printf("Please Enter Size of the Rotate Array = ");
    scanf("%d", &size);

    printf("Please Enter the Rotate Array Elements = ");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Number of Times Right Rotate an Array = ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) 
    {
        temp = a[size - 1];
        for(j = size - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }
    
    printf("\nArray Elements After Right Rotating Array  :  ");
    PrintArray(a, size);
}
