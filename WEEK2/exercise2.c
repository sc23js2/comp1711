#include <stdio.h>

int main(){

    char name[15];
    printf("What is your name? :");
    scanf("%s", %name);
    char name2[15];

    for (int i = 0; i < 15; i++){
        name2[i] = name[14-i];
    }

    printf("%s\n", name);
}