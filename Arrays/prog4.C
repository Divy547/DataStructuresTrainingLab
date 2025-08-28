#include <stdio.h>

int main()
{

    int length;
    printf("Enter the length: ");
    scanf("%d", &length);
    int arr[length];
    int max = 0;
    printf("Enter %d elements : ", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Getting the max element..
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // Initialising the freqency array
    int freq[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < length; i++)
    {
        freq[arr[i]]++;
    }
    printf("Element\tFrequency\n");
    for (int i = 0; i < max+1; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d\t%d\n", i, freq[i]);
        }
    }

    return 0;
}