#include <stdio.h>

int main(){

    int a;
    printf("Input a number: ");
    scanf("%d", &a);

    if (a==0)
    {
        printf("Value is 0\n");
    }
    else if (a>0)
    printf("Value is positive\n");
    else
    printf("Value is negative\n");
}