#include <stdio.h>

int main(){
    int a = 0;
    a = 1;

    switch (a)
    {
        case 0: printf("Selected option 0\n");
        break;

        case 1: printf("Selected option 1\n");
        break;

        default: printf("A different option has been selected\n");
    }
}