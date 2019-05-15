#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

int main()
{
    FILE *fptr;

    //char path[120] = "C:\Users\Szonja-asus\Documents\greenfox\week-06\day-03\Write multiple lines\cmake-build-debug\my-file.txt";
    char word[5] = "Iggy";
    int number = 3;
    int i;
    char str1;

    fptr = fopen("my-file.txt", "w");

    if (fptr == NULL) {
        printf("Unable to open file");
    }

    for(i = 0; i < number+1;i++)
    {
        fgets(word, sizeof word, stdin);
        fputs(word, fptr);
    }
    fclose (fptr);
/*-------------- read the file -------------------------------------*/
    fptr = fopen ("my-file.txt", "r");
    printf("\n The content of the file %s is  :\n", "my-file.txt");
    str1 = fgetc(fptr);
    while (str1 != EOF)
    {
        printf ("%c", str1);
        str1 = fgetc(fptr);
    }
    printf("\n\n");
    fclose (fptr);
    return 0;
}