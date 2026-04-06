// Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

#include <stdio.h>
int fib(int n){
    if (n <= 1) { // base case
        return n;
    }

    return fib(n - 1) + fib(n - 2); // recursive case
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is %d\n", n, fib(n));
    return 0;
}