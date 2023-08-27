#include <stdio.h>

void addMatrices(int mat1[][100], int mat2[][100], int result[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int m, int n, int q) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p, q;

    printf("Enter the number of rows and columns for the first matrix (m n): ");
    scanf("%d %d", &m, &n);

    int mat1[100][100];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int mat2[100][100];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    int resultAdd[100][100];
    int resultMul[100][100];

    if (m == p && n == q) {
        // Addition
        addMatrices(mat1, mat2, resultAdd, m, n);

        // Multiplication
        multiplyMatrices(mat1, mat2, resultMul, m, n, q);

        printf("Result of addition:\n");
        printMatrix(resultAdd, m, n);

        printf("Result of multiplication:\n");
        printMatrix(resultMul, m, q);
    } else {
        printf("Matrix addition and multiplication are not possible due to incompatible dimensions.\n");
    }

    return 0;
}
