// Find the sum and average of odd numbers greater than zero 

#include <stdio.h>

void getInput(int arr[], int size);
int sumOdd(int arr[], int size);
float aveArray(int arr[], int size);
void display(int sum, float average);

int main(){

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    getInput(arr, size);
    int sum = sumOdd(arr, size);
    float average = aveArray(arr, size);
    display(sum, average);

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

int sumOdd(int arr[], int size){
    int ctr, sum = 0;
    for (ctr = 0; ctr < size; ctr++){
        if (arr[ctr] > 0){
            if (arr[ctr] % 2 != 0){
                sum += arr[ctr];
            }
        }
    }
    return sum;
}
float aveArray(int arr[], int size){
    int ctr, sum = 0, count = 0;
    for (ctr = 0; ctr < size; ctr++){
        if (arr[ctr] > 0){
            if (arr[ctr] % 2 != 0){
                sum += arr[ctr];
                count++;
            }
        }
    }
    if (count)
        return (sum/(float)count);
    else
        return 0;
}

void display(int sum, float average){
    printf("The sum of the odd elements in the array is: %d\n", sum);
    printf("The average of the odd elements in the array is: %.2f", average);
    return;
}