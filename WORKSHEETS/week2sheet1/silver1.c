#include <stdio.h>

int main(){

    int mark;
    printf("Input your mark :");
    scanf("%d", &mark);

    if (mark>70)
    {
        printf("Grade distinction\n");
    }
    else if(mark < 50)
    {
        printf("Failing Grade\n");
    }
    else
    {
        printf("Grade Pass\n");
    }
}