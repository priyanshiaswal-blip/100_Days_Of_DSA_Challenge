// A system receives two separate logs of user arrival times from two different servers. Each log is already 
// sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

#include <stdio.h>
int main() {
    int n1, n2;
    int arr1[100], arr2[100], result[200];

    printf("Enter the size of the first log: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        printf("Enter arrival time %d for log 1: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second log: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        printf("Enter arrival time %d for log 2: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted logs into a single chronological log
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        }
        else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from either log
    while (i < n1) {
        result[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    // Display the merged chronological log
    printf("Merged chronological log: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
        if (i < k - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;

}