#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {

    char filename[50] = "FitnessData_2023.csv";

    FITNESS_DATA data[100];
    FILE *file = fopen(filename, "r");

    if (file == NULL) {//if theres a problem with the file
        perror(""); //print last known error
        return 1; //return 1 indicates error
    }

    int num_of_lines = 0;
    int buffer_size = 25;
    char line_buffer[buffer_size];

    char datebuffer[10], timebuffer[5], stepsbuffer[10];

    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        tokeniseRecord(line_buffer, ",", datebuffer, timebuffer, stepsbuffer);
        strcpy(data[num_of_lines].date, datebuffer);
        strcpy(data[num_of_lines].time, timebuffer);
        int stepsbuffer2 = atoi(stepsbuffer);
        scanf(data[num_of_lines].steps, stepsbuffer2);
        num_of_lines++;
    }

    printf("Number of records in file: %d\n", num_of_lines);

    for (int i = 0; i < 3; i++)
    {
        
       fprintf("%s/%s/%d", data[i].date, data[i].time, &data[i].steps);
    }

    fclose(file);
    return 0;
}