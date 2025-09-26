#include <stdio.h>

void palindrome() {
    int n, reversed = 0, remainder, original;

    printf("Enter a number for palindrome check: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("✅ %d is a Palindrome number.\n", original);
    } else {
        printf("❌ %d is not a Palindrome number.\n", original);
    }
}

