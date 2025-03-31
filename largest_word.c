//Write a C program to find the first largest word in a given sentence.Assume that words are separated by spaces.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], word[50], largest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';

            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(largest, word); 
            }

            j = 0; 
        } else {
            word[j++] = str[i]; 
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("First largest word: %s\n", largest);
    printf("Length: %d\n", maxLen);

    return 0;
}
