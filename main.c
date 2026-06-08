#include<stdio.h>

int main()
{
    int arr[6] = {50,20,80,10,5,70};

    int smallest = arr[0];
    int secondSmallest = arr[0];

    for(int i = 1; i < 6; i++)
    {
        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    printf("Smallest = %d\n", smallest);
    printf("Second Smallest = %d\n", secondSmallest);

    return 0;
}
