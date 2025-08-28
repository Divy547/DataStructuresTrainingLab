#include<stdio.h>

int main(){
    
    
    int length, high, low, mid;
    printf("Enter the length: ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter %d elements : ", length);
    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    
    int element;
    printf("Enter the element: ");
    scanf("%d", &element);

    // Binary Search
    high = length -1;
    low = 0;
    while (low <= high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            for(int i = mid; i < length-1; i++){
                arr[i] = arr[i+1];
            }

            length-=1;
            arr[length];
            
            for(int i = 0; i < length; i++){
                printf("%d\n", arr[i]);
            }
            return 0;
        }
        else if (arr[mid] < element){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    
    return 0;
}