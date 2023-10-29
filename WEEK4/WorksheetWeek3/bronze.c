#include <stdio.h>
typedef struct 
{
    double x;   
    double y;
}POINT;

int main(){

    int size = 3;
    POINT point[size];

    for (int i=0; i<size; i++){

        scanf("%lf", &point[i].x);
        scanf("%lf", &point[i].y);
    }

    for (int i=0; i < size; i++){
        printf("x:<%.2lf>, y:<%.2lf>\n", point[i].x, point[i].y);
    }


    return 0;
}