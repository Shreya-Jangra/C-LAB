/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int n;

    printf("enter : ");
    scanf("%[^\n]s", str);

    printf("Last characters of each word: ");

    while (str[i] != '\0')
    {

        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            printf("%c ", str[i]);
        }
        i++;
    }

    printf("\n");
    return 0;


return 0;
}*/
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    printf("Last characters of each word: ");

    while (str[i] != '\0')
    {

        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            printf("%c ", str[i]);
        }
        i++;
    }

    printf("\n");
    return 0;
}