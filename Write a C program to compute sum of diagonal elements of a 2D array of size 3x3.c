#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum = 0;

    printf("Enter elements of the 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
