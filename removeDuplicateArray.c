#include <stdio.h>

void printUnique(int arr[], int size) {
    int count;
    int isUnique;
    
    for (int i = 0; i < size; i++) {
        isUnique = 1; 
        
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            count = 0;
            for (int k = 0; k < size; k++) {
                if (arr[i] == arr[k]) {
                    count++;
                }
            }

            if (count >= 1) {
                printf("%d ", arr[i]);
            }
        }
    }
}

int main() {
    int size;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Unique Elements: ");
    printUnique(arr, size);

    return 0;
}