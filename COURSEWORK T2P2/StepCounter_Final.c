#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

#include <math.h> //for rounding
#include <ctype.h>  // to use toupper() function.
#include <stdbool.h> //for boolean

// Struct moved to header file


//compile comand
// gcc FitnessDataStruct.h StepCounter_Final.c -o StepsTask2 -lm


// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
char filename[50] = "FitnessData_2023.csv";
FILE *file;
FITNESS_DATA data[100];
int num_of_lines = 0;

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
    printf("Q: Quit\n");
}

bool openFile(){

    printf("Input filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");

    if (file == NULL) 
    { //if theres a problem with the file
        printf("Error: Could not open file.\n"); 
        fclose;
        return false; //indicates error
    }

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

    printf("Total records: %d\n", num_of_lines);
}

void fewestSteps() {
    int fewestPosition = 0;

    for (int i=0; i < num_of_lines; i++){
        if (data[i].steps < data[fewestPosition].steps)
        {
            fewestPosition = i;
        }
    }

    printf("Fewest Steps: %s, %s\n", data[fewestPosition].date, data[fewestPosition].time);
}

void mostSteps() {
   int mostPosition = 0;

    for (int i=0; i < num_of_lines; i++){
        if (data[i].steps > data[mostPosition].steps)
        {
            mostPosition = i;
        }
    }

    printf("Largest Steps: %s %s\n", data[mostPosition].date, data[mostPosition].time);   
}

int meanStepCount(){
    float mean = 0;

    for (int i =0; i < num_of_lines; i++){
        mean += data[i].steps;
    }

    mean = mean/num_of_lines;

   printf("Mean step count: %g\n", round(mean));
}

void longest500period(){
    int startPos = -1, endPos = -1, longestPeriod = 0;
    int tempStartPos = -1, tempLength = 0;

    for (int i = 0; i < num_of_lines; i++)
    {
        if (tempStartPos ==-1) //tempStartPos resets everytime a 500 period ends
        {
            if (data[i].steps >= 500 ) //detects when 500 period starts
            {
                tempStartPos = i; //gets position where 500 starts
            }
        }
        else //we are in a 500 period
        {
            if (data[i].steps >= 500){ //while were still in the period
                tempLength ++;
            }
            else //we have left the period
            {
                if (tempLength > longestPeriod) //if this period is longer than the currently stored one
                {
                    longestPeriod = tempLength;
                    startPos = tempStartPos;
                    endPos = i-1; //gets pos of previous entry because current entry is where steps is less than 500.

                    tempStartPos = -1; //reset temporary values
                    tempLength = 0;
                }
            }
        }
    }

    printf("Longest period start: %s %s\n", data[startPos].date, data[startPos].time);
    printf("Longest period end: %s %s\n", data[endPos].date, data[endPos].time);

}

// Complete the main function
int main() {

    char option = 'X';

    while (true)
    {
        displayMenu();
        printf("Choose an option: ");

        option  = getchar();

        while (getchar() != '\n');
        option = toupper(option);

        switch(option)
        {
            case 'A':
            {
               int valid = openFile();
               if (valid == false)
               {
                    return 1;
               }
               else
               printf("\nFile opened successfully.\n");
            }
            break;
            
            case 'B':
            {
                numOfFileLines();
            }
            break;

            case 'C':
            {
                fewestSteps();
            }
            break;

            case 'D':
            {
                mostSteps();
            }
            break;

            case 'E':
            {
                meanStepCount();
            }
            break;

            case 'F':
            {
                longest500period();
            }
            break;

            case 'Q':
            {
                return 0;
            }
            break;

            
        }
    }


}









