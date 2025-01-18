#include <stdio.h>

// Function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 0) {
        return -1; // Indicating invalid input
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci series:\n");
        for (int i = 1; i <= n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}
