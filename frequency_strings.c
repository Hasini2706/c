
/*{
    char str[1000], ch;
    int count = 0,i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, freq[256] = {0}; 
    scanf("%s", str);

    // Iterate through the string and count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;  // Increment frequency of the character
    }

    // Print the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        // Only print the character if it hasn't been printed already
        if (freq[str[i]] != 0) {
            printf("%c -> %d\n", str[i], freq[str[i]]);
            freq[str[i]] = 0;  // Set it to 0 to avoid printing again
        }
    }

    return 0;
}


