#include <stdio.h>
typedef struct 
{
    double x;   
    double y;
}POINT;

double Mdistance(POINT points[])
{

}


int main(){

    int size = 3;
    POINT points[size];

    for (int i=0; i<size; i++){

        scanf("%lf", &points[i].x);
        scanf("%lf", &points[i].y);
    }

    for (int i=0; i < size; i++){
        printf("x:<%.2lf>, y:<%.2lf>\n", points[i].x, points[i].y);
    }


    return 0;
}