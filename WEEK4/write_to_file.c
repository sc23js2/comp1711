#include <stdio.h>

int main() {
    char filename[] = "data1.txt";
    FILE *file = fopen(filename, "a"); //pointer to file. 

    if (file == NULL) {//if theres a problem with the file
        perror(""); //print last known error
        return 1; //return 1 indicates error
    }

    int number, numlines = 10;
    printf("Type %d numbers: ", numlines);

    for (int i=0; i < numlines; i++){

        scanf("%d", &number);
        fprintf(file, "%d\n", number); //fprintf is file print
    }

    fclose(file);
    return 0;
}