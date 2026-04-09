// A secret system stores code names in forward order. To display them in mirror format, 
//you must transform the given code name so that its characters appear in the opposite order.

#include <stdio.h>
int main(){
    char codeName[100];
    printf("Enter the code name: ");
    scanf("%s", codeName);

    // Calculate the length of the code name
    int length = 0;
    while (codeName[length] != '\0') {      // string terminator '\0' porjonto loop cholbe
        length++;
    }

    // Print the code name in reverse order
    printf("Mirror format: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", codeName[i]);
    }
    printf("\n");
    return 0;

}