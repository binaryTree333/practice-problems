// Find the duplicate in an array

#include <stdio.h>
#define MAX 100 // the max value of element the program can cater

void getInput(int arr[], int size);
void duplicateArray(int arr[], int size, int freq[]);


int main(){

    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size], freq[MAX];

    getInput(arr, size);

    duplicateArray(arr, size, freq);


    return 0;
}

void getInput(int arr[], int size){
    int ctr;
    printf("Enter %d elements in the array:\n", size);

    for (ctr = 0; ctr < size; ctr++){
        scanf("%d", &arr[ctr]);
    }
    return;
}

void duplicateArray(int arr[], int size, int freq[]){
    int ctr, flag = 0;

    printf("Duplicate elements in the array are: ");
    for (ctr = 0; ctr < size; ctr++){
        freq[arr[ctr]]++;
        if (freq[arr[ctr]] == 2){
            printf("%d ", arr[ctr]);
            flag = 1;
        }
    }

    if (!flag)
        printf("None");
}