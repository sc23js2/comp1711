#include <stdio.h>

int main(){

    int mark = -1;

    printf("Input your mark (0-100): ");
    scanf("%d", &mark);

    if (mark >=0 && mark <= 100)
    {
        if (mark == 0)
        {
            printf("The mark of %d is zero\n", mark);
        }
        else if (mark < 40)
        {
            printf("The mark of %d is a fail\n", mark);
        }
        else
        {
            printf("The mark of %d is a pass\n", mark);
        }
    }
    else
    {
    printf("Error. Marks must be between 0 and 100\n");
    }

    int a = 5;
    printf("%d", &a);
    
    return 0;
}