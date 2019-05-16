/*C program to read and print students' details
using structure and Dynamic Memory Allocation.*/

#include <stdio.h>
#include <stdlib.h>

/*Structure declaration*/
struct student {
    char fullName[60];
    int idNumber;
    float examResult;
};

int main()
{
    /*The entered details will be stored in this ***********/
    struct student *pointerOfStudents;
    int numberOfStudents;
    int i;

    printf("Enter total number of students:\n");
    scanf("%d", &numberOfStudents);

    /*Allocate memory dynamically for numberOfStudents objects*/
    pointerOfStudents = (struct student *) malloc(numberOfStudents * sizeof(struct student));

    /*Error handling*/
    if (!(struct student *) malloc(numberOfStudents * sizeof(struct student))) {
        printf("%s\n", "Error occurred while allocating memory");
    } else {

        /*Read and print details*/
        for (i = 0; i < numberOfStudents; i++) {
            printf("\nEnter details of student [%d]:\n", i + 1);
            printf("\n");
            printf("- Enter full name:\n");
            scanf(" "); /*clear input buffer*/
            gets((pointerOfStudents + i)->fullName);
            printf("- Enter ID number:\n");
            scanf("%d", &(pointerOfStudents + i)->idNumber);
            printf("- Enter exam result:\n");
            scanf("%f", &(pointerOfStudents + i)->examResult);
        }

        printf("\nEntered details are:\n");
        for (i = 0; i < numberOfStudents; i++) {
            printf("%s \t %d \t %.2f\n", (pointerOfStudents + i)->fullName,
                   (pointerOfStudents + i)->idNumber, (pointerOfStudents + i)->examResult);
        }
    }
    return 0;
}