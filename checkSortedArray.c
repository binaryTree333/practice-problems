// Check if the array is sorted in increasing order

#include <stdio.h>
#define ARRAY_SIZE 10

int main(){

    int arr[ARRAY_SIZE], i, flag = 1;

    printf("Enter 10 elements in the array:\n");

    for (i = 0; i < ARRAY_SIZE; i++){
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < ARRAY_SIZE-1; i++){
        if (arr[i] > arr[i+1]){
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("True");
    else
        printf("False");

    return 0;
}