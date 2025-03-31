// Write a program to concatenate two strings without using any library function.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   char str1[50]="try adding ",str2[50]="this";
    printf("strcat()\n");
    strcat(str1, str2); // Concatenate str2 to str1 (result is stored in str1)
    printf("%s\n", str1);
    return 0;
}
