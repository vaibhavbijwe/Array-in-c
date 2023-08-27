#include <stdio.h>

int findSmallest(int arr[], int size) {
    int min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = findSmallest(arr, size);
    printf("The smallest number in the array is: %d\n", smallest);
    return 0;
}
