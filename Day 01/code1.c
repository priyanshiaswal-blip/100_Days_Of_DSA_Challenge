// C program to insert an element at a specific position in an array

#include <stdio.h>
int main() {
    int n, pos, x;
    int arr[100]; // assuming the maximum size of the array is 100

    // Input the number of elements in the array
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input the elements of the array
    }

    // Input the position and the element to be inserted
    scanf("%d %d", &pos, &x);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right to create space for the new element
    }

    arr[pos - 1] = x; // Insert the new element at the specified position

    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]); // Print the updated array after insertion
    }
    
    return 0;
}