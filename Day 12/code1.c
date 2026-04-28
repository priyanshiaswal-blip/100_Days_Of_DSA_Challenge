// Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a 
// square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i]
// for all valid i and j).

#include <stdio.h>

int main() {
    int m, n, i, j;
    int mat[100][100];
    int isSymmetric = 1;

    // Input rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Check if matrix is square
    if (m != n) {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // Input matrix elements
    printf("Enter the elements of matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
            break;
    }

    // Output result
    printf("The resultant matrix is ");
    if(isSymmetric)
        printf("Symmetric Matrix.");
    else
        printf("not a Symmetric Matrix.");

    return 0;
}