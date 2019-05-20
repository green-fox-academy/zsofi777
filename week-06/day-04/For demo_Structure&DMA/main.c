
/*
 *C program to read and print students' details
 *using structure and Dynamic Memory Allocation
 */

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
    /*The entered details will be stored in this pointer*/
    struct student *pointerOfStudents;
    int numberOfStudents;
    int i;

    printf("Enter total number of students:\n");
    scanf("%d", &numberOfStudents);

    /*Allocate memory dynamically for the amount equal to numberOfStudents objects*/
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
            /*Clear input buffer*/
            scanf(" ");
            /*The function gets() reads until new line (\n),
             * meaning it can handle space, like a first and a last name together
             */
            gets((pointerOfStudents + i)->fullName);
            printf("- Enter ID number:\n");
            scanf("%d", &(pointerOfStudents + i)->idNumber);
            printf("- Enter exam result:\n");
            scanf("%f", &(pointerOfStudents + i)->examResult);
            /*In each loop the details will be added to the pointer*/
        }

        printf("\nThe entered details are:\n");
        for (i = 0; i < numberOfStudents; i++) {
            /*
             * %.2f format specifier print only the first 2 digits of the floating point data type
             * after the point (so it will reduce the precision to 2 digits);
             * also with \t the details list will be neat
             */
            printf("%s \t %d \t %.2f\n", (pointerOfStudents + i)->fullName,
                   (pointerOfStudents + i)->idNumber, (pointerOfStudents + i)->examResult);
        }
    }
    /*Deallocate*/
    free(pointerOfStudents);
    pointerOfStudents = NULL;
    return 0;
}