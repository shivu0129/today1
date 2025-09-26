#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number for factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("❌ Factorial of negative number doesn’t exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("✅ Factorial of %d = %llu\n", n, fact);
    }
}

