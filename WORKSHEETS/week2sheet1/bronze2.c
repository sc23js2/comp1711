#include <stdio.h>

int main(){
    int num = 12;
    int valid = 0;

    if (num % 4 == 0)
    { 
        if (num%5 == 0)
        {
            valid = 1;
        }
    }

    if (valid == 1)
    {
        printf("Num divisible by 4 and 5\n");

    }
    else
    {
        printf("false");
    }
}