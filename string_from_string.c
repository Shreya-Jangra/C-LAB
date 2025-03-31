//Write a C program to extract a substring from a given string.Prompt the user to enter the starting position and length of the substring.
#include <stdio.h>
#include <string.h>

void extractSubstring(char source[], char target[], int start, int length) {
    int i;
    for (i = 0; i < length && (start + i) < strlen(source); i++) {
        target[i] = source[start + i];
    }
    target[i] = '\0'; // Null-terminate the substring
}

int main() {
    char str[100], substr[100];
    int start, length;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character from fgets if present
    size_t ln = strlen(str) - 1;
    if (str[ln] == '\n')
        str[ln] = '\0';

    printf("Enter the starting position (0-based index): ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Input validation
    if (start < 0 || length < 0 || start >= strlen(str)) {
        printf("Invalid input: start or length out of range.\n");
        return 1;
    }

    extractSubstring(str, substr, start, length);

    printf("Extracted substring: %s\n", substr);

    return 0;
}
