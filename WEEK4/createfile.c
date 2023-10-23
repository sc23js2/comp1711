#include <stdio.h>

int main() {
    char filename[] = "data1.txt";
    FILE *file = fopen(filename, "w"); //pointer to file. 

    if (file == NULL) {//if theres a problem with the file
        perror(""); //print last known error
        return 1; //return 1 indicates error
    }

    fclose(file);
    return 0;
}