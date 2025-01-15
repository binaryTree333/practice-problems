// Searches an element and returns it's index

#include <stdio.h>

void getInput(int arr[], int size);
int searchArray(int arr[], int size, int target);
void display(int target, int index);

int main(){

    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    getInput(arr, size);

    printf("Enter the value of the targe: ");
    scanf("%d", &target);

    int index = searchArray(arr, size, target);

    display(target, index);

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

int searchArray(int arr[], int size, int target){
    int ctr;
    for (ctr = 0; ctr < size; ctr++){
        if (arr[ctr] == target){
            return ctr;
        }
    }
    return -1;
}

void display(int target, int index){
    if (index != -1){
        printf("The index of %d is %d", target, index);
    }
    else{
        printf("%d can't be found", target);
    }
}