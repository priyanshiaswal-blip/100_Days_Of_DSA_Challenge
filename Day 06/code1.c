// Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

#include <stdio.h>
int main(){
    int n;
    int arr[100];

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int slow = 0;
    for (int fast = 1; fast < n; fast++) {
        if (arr[fast] != arr[slow]) {
            slow++;
            arr[slow] = arr[fast];
        }
    }

    // Display the unique elements
    printf("Unique elements: ");
    for (int i = 0; i <= slow; i++) {
        printf("%d ", arr[i]);
        if (i < slow) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}