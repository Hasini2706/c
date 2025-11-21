#include <stdio.h>

int main() {
    char str[100];
    int i,freq[10] = {0};  // Array to store frequency of digits (0-9)

    // Input the string containing digits
    scanf("%s", str);

    // Iterate through the string and count frequency of each digit
    for ( i = 0; str[i] != '\0'; i++) {
        // Convert character to integer (digit)
        int digit = str[i] - '0';
        freq[digit]++;  // Increment the frequency of the digit
    }

    // Print the frequency of each digit
    for (i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("%d -> %d\n", i, freq[i]);
        }
    }

    return 0;
}

