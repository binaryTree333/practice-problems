// Reverses the array

#include <stdio.h>

void getInput(int arr[], int size);
void reverseArray(int arr[], int size);
void display(int arr[], int size);


int main(){
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    getInput(arr, size);
    reverseArray(arr, size);

    printf("Reversed array:\n");
    display(arr, size);

    return 0;
}

void getInput(int arr[], int size){
    int ctr;
    printf("Input the values of the array:\n");
    for (ctr = 0; ctr < size; ctr++){
        printf("Arr[%d]: ", ctr);
        scanf("%d", &arr[ctr]);
    }
    return;
}

void reverseArray(int arr[], int size){
    int ctr, temp;
    for (ctr = 0; ctr < size/2; ctr++){
        temp = arr[ctr];
        arr[ctr] = arr[size-ctr-1];
        arr[size-ctr-1] = temp;
    }
    return;
}

void display(int arr[], int size){
    int ctr;
    for (ctr = 0; ctr < size; ctr++){
        printf("Arr[%d]: %d\n", ctr, arr[ctr]);
    }
}