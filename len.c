//WAP to find the length of a string with/without using library function for getting length of the string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[50];
    int n;
        
    printf("enter : ");
    scanf("%[^\n]", str);
    printf("You entered: %s\n", str);
    printf("length :  %d\n", strlen(str));
    


    return 0;

}