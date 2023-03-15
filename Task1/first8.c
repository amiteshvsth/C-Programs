#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements\n");
    for (int i = 0; i < size; i++)
    {
          scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    printf("Sum of the array is: %d", sum);
    int avg=0;
    avg=sum/size;
    printf("\nAverage of the array is: %d", avg);
    return 0;
}