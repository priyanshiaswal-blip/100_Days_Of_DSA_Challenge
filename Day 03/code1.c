// Implement linear search to find key k in an array. Count and display the number of comparisons performed.
// First line: integer n (array size)
// - Second line: n space-separated integers
// - Third line: integer k (key to search)

#include <stdio.h>
int main(){
    int n, k, comparisons = 0;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d space-separated integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            printf("Key found at index %d\n", i);
            printf("Number of comparisons: %d\n", comparisons);
            return 0;
        }
    }
    printf("Key not found in the array.\n");
    printf("Number of comparisons: %d\n", comparisons);
    return 0;
}
