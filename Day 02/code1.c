// Write a C program to delete the element at a given 1-based position pos from an array of n integers. 
// Shift remaining elements to the left.

#include <stdio.h>
int main() {
    int n, pos;
    int arr[100]; // assuming the maximum size of the array is 100

    // Input the number of elements in the array
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input the elements of the array
    }

    // Input the position of the element to be deleted
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left to fill the gap
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]); // Print the updated array after deletion
    }
    
    return 0;
}