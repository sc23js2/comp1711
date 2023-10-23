#include <stdio.h>
#include "utils.h"

int main () {
    char filename [] = "data.txt";
    FILE *file = open_file(filename, "r");
   
    int buffer_size = 100; //file must be read inro buffer. buffer size is how much of each line we are going to read. if there was 200 characters on the line then it would only get the first 100
    char line_buffer[buffer_size];
    while(fgets(line_buffer, buffer_size, file) != NULL){ //reeading line by line. while there is still content there necxt
        printf("%s", (line_buffer)); //print the content
    }

    fclose(file);
    return 0;
}