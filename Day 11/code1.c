// Write a program to perform addition of two matrices having the same dimensions. The sum of two matrices is obtained by 
//adding corresponding elements of the matrices.

#include <stdio.h>
int main(){
    int m, n, mat1[100][100], mat2[100][100], result[100][100];
    printf("Enter the number of rows(m) and columns(n) for the matrices: ");
    scanf("%d %d", &m, &n);

    // Read first matrix
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Enter element for first matrix at position: ");
            scanf("%d", &mat1[i][j]);
            // Store the element in the first matrix
        }
    }

    // Read second matrix
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Enter element for second matrix at position: ");
            scanf("%d", &mat2[i][j]);
            // Store the element in the second matrix
        }
    }

    // Print result
    printf("Sum of the two matrices: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", result[i][j]);// Print the result of addition for the current position
        }
        printf("\n");
    }
    return 0;
}

