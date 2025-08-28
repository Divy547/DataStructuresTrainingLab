#include<stdio.h>

int main(){
    
    
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter %d elements : ", length);
    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    
    int element, index, temp;
    printf("Enter the element and the index: ");
    scanf("%d %d", &element, &index);

    length+=1;
    arr[length];
    
    for(int i = length - 1; i >= index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    for(int i = 0; i < length; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;
}