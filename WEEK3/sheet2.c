#include <stdio.h>

float areaCircle(float radius){
    const float pi = 3.14151926;
    return radius * radius * pi;
}

float volumeSphere(float radius){
    const float pi = 3.1415926;
    return (4/3) * pi * radius * radius * radius;
}

int str_len(char string[]){
/////////////////////////////////////
}

int main(){
    printf("Enter a radius: ");
    float radius;
    scanf("%f", &radius);
    printf("Circle with radius %f has area %f", radius, areaCircle(radius));
    printf("Sphere with radius %f has area %f", radius, areaCircle(radius));

    printf("Enter a string: ");
    char string[];
    scanf("%s", string);
    printf("The length of %s is %d", string, str_len(string));
    return 0;
}