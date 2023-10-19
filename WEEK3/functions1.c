#include <stdio.h>

float sum(int a, int b)
{
    int answer = a + b;
    return answer;
}

int main(){

    int y = 2;
    printf("Enter a number: ");
    float x;
    scanf("%f", &x);

    int z = sum(y, x);
    printf("The sum of %0.4f and %d is %d.\n", x, y, z);
    return 0;
}

