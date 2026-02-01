#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("%d ", a);  // Print the first term
    }
    if (n >= 2) {
        printf("%d ", b);  // Print the second term
    }

    for (i = 3; i <= n; i++) {
        next = a + b;      // Calculate next term
        printf("%d ", next);
        a = b;             // Move forward
        b = next;
    }

    printf("\n");
    return 0;
}

