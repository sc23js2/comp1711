#include <stdio.h>

float ftoc(int f);
float ftoc(int f);
float ftok(int f);


float ftoc(int f)
{
    return (f - 32) / 1.8;
}

float ftoc(int f){
    return (c * 1.8) + 32;
}

float ftok(int f){
    return (ftoc(f) + 273.15);
}

int main(){
    printf("1. F to C.\n2.F to K.\n3. C to F.\nInput Option: ");
    int option;
    scanf("%d", &option);
    float temp;
    scanf("%f", &temp);
    float result;

    switch (option){
        case 1:
            result = ftoc(temp);
            printf("%f Farenheight is %f Celcuis", temp, result);
        break;
        case 2:
            result = ftok(temp);
            printf("%f Farenheight is %f Kelvin", temp, result);
        break;
        case 3: 
            result = ctof(temp);
            printf("%f Celcius is %f Farenheight", temp, result);

        break;

        default: 
        printf("invalid");
    }

    printf("new temp: %f", result);

}