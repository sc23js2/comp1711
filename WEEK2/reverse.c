#include <stdio.h>

int main(){

    char string[5] = "Hello";

    for(int i=5; i>=0; i--)
    {
        if (string[i] == '\0')
        printf("\\0");

        printf("%c\n", string[i]);
    }
}