#include <stdio.h>

int main() {
    int number, i, Prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 2) Prime = 0;
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            Prime = 0;
            break;
        }
    }

    if (Prime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}

