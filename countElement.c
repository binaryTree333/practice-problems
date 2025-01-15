// count how many times a specific value appears in an array

#include <stdio.h>

void getInput(int arr[], int size);
int countArray(int arr[], int size, int target);
void display(int target, int count);

int main(){

    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    getInput(arr, size);

    printf("Enter the target value: ");
    scanf("%d", &target);
    
    int count = countArray(arr, size, target);

    display(target, count);

    return 0;
}

void getInput(int arr[], int size){
    int ctr;
    for (ctr = 0; ctr < size; ctr++){
        printf("Arr[%d]: ", ctr);
        scanf("%d", &arr[ctr]);
    }
    return;
}

int countArray(int arr[], int size, int target){
    int ctr, count = 0;

    for (ctr = 0; ctr < size; ctr++){
        if (arr[ctr] == target){
            count++;
        }
    }
    return count;
}

void display(int target, int count){
    printf("The number %d appears %d times in the array", target, count);
    return;
}