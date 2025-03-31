// Write a program to count the number of vowels, consonants, new lines and the total number of characters and words present in a string.
#include <stdio.h>
#include <ctype.h>
#include <strlen.c>

int main()
{
    char str[1000];
    int vowels = 0, consonants = 0, words = 0, characters = 0, newlines = 0;

    printf("Enter a paragraph (end input with ~ on a new line):\n");

    while (fgets(str, sizeof(str), stdin))
    {
        
        if ( str[1] == '\n')
            break;
        

            for (int i = 0; str[i] != '\0'; i++)
        {
            char ch = str[i];
            characters++;

            if (ch == '\n')
            {
                newlines++;
            }

            if (isalpha(ch))
            {
                ch = tolower(ch);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    vowels++;
                else
                    consonants++;
            }

            if ((ch == ' ' || ch == '\n' || ch == '\t') &&
                (i > 0 && isalpha(str[i - 1])))
            {
                words++;
            }
        }
    }

    // Edge case: if last word didn't end with space/newline
    if (isalpha(str[strlen(str) - 2]))
    {
        words++;
    }

    printf("\n--- Statistics ---\n");
    printf("Vowels      : %d\n", vowels);
    printf("Consonants  : %d\n", consonants);
    printf("New lines   : %d\n", newlines);
    printf("Characters  : %d\n", characters);
    printf("Words       : %d\n", words);

    return 0;
}
