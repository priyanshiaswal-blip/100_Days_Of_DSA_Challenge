// Read a string and check if it is a palindrome using two-pointer comparison.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int left = 0;
    int right = strlen(str) - 1; // Get the length of the string and set right pointer to the last character
    int isPalindrome = 1; // Assume the string is a palindrome until proven otherwise

    while (left < right){
        if (str[left++] != str[right--]){ // Compare characters at left and right pointers, then move them towards the center
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}