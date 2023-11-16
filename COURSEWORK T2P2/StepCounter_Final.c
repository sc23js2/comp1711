#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"
#include <ctype.h>  // to use toupper() function.
#include <stdbool.h>
// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
char filename[50] = "FitnessData_2023.csv";
FILE *file;
FITNESS_DATA data[100];

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

void displayMenu()
{
    printf("-----MENU-----\n");
    printf("A: Specify the filename to be imported\n");
    printf("B: Display the total number of records in the file\n");
    printf("C: Find the date and time of the timeslot with the fewest steps\n");
    printf("D: Find the data and time of the timeslot with the largest number of steps\n");
    printf("E: Find the mean step count of all the records in the file\n");
    printf("F: Find the longest continuous period where the step count is above 500 steps\n");
    printf("Q: Quit\n\n");
}

bool openFile(){

    printf("Input filename: ");
   // scanf("%s", filename); // change this afterwards !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    
    file = fopen(filename, "r");

    if (file == NULL) 
    { //if theres a problem with the file
        printf("Error: Could not open file.\n"); 
        fclose;
        return false; //indicates error
    }

    int num_of_lines = 0;
    int buffer_size = 30;
    char line_buffer[buffer_size];

    char datebuffer[11], timebuffer[6], stepsbuffer[7];
    
    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        tokeniseRecord(line_buffer, ",", datebuffer, timebuffer, stepsbuffer);
        
        strcpy(data[num_of_lines].date, datebuffer);
        strcpy(data[num_of_lines].time, timebuffer);
        data[num_of_lines].steps = atoi(stepsbuffer); 
        // ^^ converts from char bc tokenizeRecord takes a char but FITNESS_DATA stores an int

        num_of_lines++;
    }
    fclose;
    return true;
}

void numOfFileLines(){

    int num_of_lines;

    for (int i = 0; i< sizeof(data); i++ )
    {
        num_of_lines++;
    }
    printf("Total records: %d\n", num_of_lines);

}

bool checkIfFileOpen()
{
    if (file == NULL)
    {
        return false;
    }
    else
    return true;
}

// Complete the main function
int main() {

    char option = 'X';
    bool quit = false;

    while (quit == false)
    {
        displayMenu();
        option = 'X';

        while(option=='X'){
            printf("Choose an option: ");
            option = getchar();
            option = toupper(option);
            printf("\n");
        }

        switch(option)
        {
            case 'A':
            {
               int valid = openFile();
               if (valid == false)
               {
                    quit = true;
               }
               else
               printf("\nFile opened successfully.\n");
            }
            break;
            
            case 'B':
            {
                printf("BBBBBBBB");
                numOfFileLines();
            }
            break;

            case 'C':
            {

            }
            break;

            case 'D':
            {

            }
            break;

            case 'E':
            {
                
            }
            break;

            case 'F':
            {

            }
            break;

            case 'Q':
            {
                quit = true;
            }
            break;
        }
    }


}









