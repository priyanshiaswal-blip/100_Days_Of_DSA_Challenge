// Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

#include <stdio.h>

int main() {
    int m, n;
    int matrix[200][200];
    int sum = 0;

    // Input dimensions
    printf("Enter the number of rows and columns");
    scanf("%d %d", &m, &n);

    // Input matrix
    printf("Matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is square
    if (m != n) {
        printf("Primary diagonal is defined only for square matrices\n");
        return 0;
    }

    // Calculate sum of primary diagonal
    for (int i = 0; i < m; i++) {
        sum += matrix[i][i];
    }

    // Output result
    printf("Sum of primary diagonal = %d\n", sum);

    return 0;
}