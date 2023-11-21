
#ifndef FITNESS_DATA_STRUCT_H
#define FITNESS_DATA_STRUCT_H

#include <stdio.h>
#include <stdbool.h> //for boolean

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Helper function prototypes
void tokeniseRecord(const char *input, const char *delimiter, char *date, char *time, char *steps);
void displayMenu();
bool openFile();
void numOfFileLines();
void fewestSteps();
void mostSteps();
int meanStepCount();
void longest500period();
#endif // FITNESS_DATA_STRUCT_H
