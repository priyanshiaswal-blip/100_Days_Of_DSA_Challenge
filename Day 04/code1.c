// Given an array of n integers, reverse the array in-place using two-pointer approach.

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

    // Two-pointer approach to reverse the array
    int left = 0, right = n - 1;
    while (left < right){
        int temp = arr[left];
        arr[left] = arr [right];
        arr[right] = temp;
        left++;
        right--;
    }

    // Display the reversed array
    printf("Reversed array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}