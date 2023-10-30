#include <stdio.h>

typedef struct {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
} STUDENT;

STUDENT inputStudents (STUDENT student){

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter studentID: ");
    scanf("%s", student.student_id);

    printf("Enter mark: ");
    scanf("%u", &student.mark);    


    return student;
}

int main(){

    int number_of_students = 3;
    STUDENT students[number_of_students];

    //inputting students 1 by 1
    for (int i = 0; i < number_of_students; i++){
        students[i] = inputStudents(students[i]);
    }

    printf("\n--------OUTPUTTING RECORDS-------");
    for (int i = 0; i < number_of_students; i++) {
        printf("-------------\n");
        printf("Student name: %s\n", students[i].name);
        printf("Student ID: %s\n", students[i].student_id);
        printf("Final mark: %u\n", students[i].mark);
    }
    printf("-------------\n");

    return 0;
}