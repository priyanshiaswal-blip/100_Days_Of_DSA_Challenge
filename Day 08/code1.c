//  Given integers a and b, compute a^b using recursion without using pow() function.

#include <stdio.h>
int power(int a, int b){
    if (b == 0) { // base case
        return 1;
    }

    return a * power(a, b - 1); // recursive case
}

int main(){
    int a, b;
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);
    printf("%d^%d = %d\n", a, b, power(a, b));
    return 0;
}