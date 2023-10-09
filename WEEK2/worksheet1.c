#include <stdio.h>
#include <string.h>
void one(){ //hello world
    printf("Hello World");
}

void two(){ //interger sum
    int a, b, c;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);

    c = a + b;
    printf("Result is %d\n", c);
}

void three(){ //output max vaue of eacj datatype
    printf("MAX of int %d", __INT16_MAX__);
}


void four(){ //area of a circle
    float radius, area, pi;
    printf("Enter circle radius: ");
    scanf("%f", radius);

    pi = 2.141529;
    area = pi * radius * radius;
    printf("Area of circle is %f", area);

}

void five(){ //swapping variables
    char a[] = "variable 1";
    char b[] = "variable 2";
    char temp[] = "";

   // temp = strcpy(a);
    // a = b;
    // b = a;
}

void six(){ //odd or even

    int number;
    printf("Enter a number: ");
    scanf("%d", number);
    
    if (number % 2 == 0) {
        printf("%d is an even number");
    }
    else{
        printf("%d is an odd number");
    }
}

void seven(){ //farenheight to celcuius

    float degreesF, degreesC, conversion;
    prinf("Enter farenheight degrees");
    scanf("%f", degreesF);
    degreesC = (degreesF - 32)/1.8;
    printf("%f degrees farenheight is %f degrees celcius", degreesF, degreesC);
}

void eight(){ //factorial

    int num, result;
    printf("Enter a number: ");
    scanf("%d", num);
     
    result = factorial(num);
    printf("factoril of %d is %d", num, result);
}

void nine(){  //

}

void ten(){ //

}


int factorial(num)
{
    if (num > 1){
        return num * factorial(num-1);
    }
    else{
        return num;
    }
}

int main() {
    three();
    return 0;
}

