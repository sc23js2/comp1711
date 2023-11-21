#include <stdio.h>
/*** @brief ....*/

typedef  struct{
    char date[20];
    float bloodIron;
} reading;

int main(){
    reading today;
    //today.bloodIron = atoi(5);
   // today;

    reading week[7];
    for (int i=0; i<7; i++)
    {
        printf("Enter date: ");
        scanf("%s", week[i].date);
        printf("Enetr blood iron reading: ");
        scanf("%f", &week[i].bloodIron);

        printf("%s  %f", week[i].date, week[i].bloodIron);
    }
}