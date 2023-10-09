#include <stdio.h>
float main() {

    float side1, side2;
    printf("Enter length of side 1: ");
    scanf("%f", &side1);
    printf("Enter length of side 2: ");
    scanf("%f", &side2);
    
    float area = side1 * side2;

    printf("The area of your rectangle is %f units^2\n", area);
    return 0;
}

