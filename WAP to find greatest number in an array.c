#include <stdio.h>

int findGreatest(int arr[], int size) {
    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
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

    int greatest = findGreatest(arr, size);

    printf("The greatest number in the array is: %d\n", greatest);

    return 0;
}
