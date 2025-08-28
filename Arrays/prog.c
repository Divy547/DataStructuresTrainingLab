#include <stdio.h>

int main()
{
    int l1, l2;
    printf("Enter the length of array1: ");
    scanf("%d", &l1);
    int arr1[l1];
    printf("Enter %d elements of array one(sorted way): ", l1);
    for (int i = 0; i < l1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the length of array2: ");
    scanf("%d", &l2);
    int arr2[l2];
    printf("Enter %d elements of array two(sorted way): ", l2);
    for (int a = 0; a < l2; a++)
    {
        scanf("%d", &arr2[a]);
    }

    
    int mer[l1 + l2];
    int b=0, c = 0;
    int k = 0;

    while (b < l1 && c < l2) {
        if (arr1[b] < arr2[c]) {
            mer[k++] = arr1[b++];
        } else {
            mer[k++] = arr2[c++];
        }
    }

    while (b < l1) {
        mer[k++] = arr1[b++];
    }
    while (c < l2) {
        mer[k++] = arr2[c++];
    }

    for (int p = 0; p < l1 + l2; p++)
    {
        printf("%d ", mer[p]);
    }

    return 0;
}