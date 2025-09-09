#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 0) {
        return 0;  // 
    }
    if (n == 1 || n == 2) {
        return 1;  
    }

    long long term1 = 1;  
    long long term2 = 1;  
    long long next;

    for (int i = 3; i <= n; ++i) {
        next = term1 + term2;  
        term1 = term2;         
        term2 = next;        
    }

    return next;
}

int main() {
    int n;
    printf("Please enter the number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    long long result = fibonacci(n);  // Use long long
    printf("F(%d) = %lld\n", n, result);  // Correct format

    return 0;
}   
