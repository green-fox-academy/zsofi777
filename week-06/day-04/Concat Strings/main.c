#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char *concat_strings(char *str1, char *str2);

int main()
{
    char string1[128];
    strcpy(string1, "I love");

    char string2[128];
    strcpy(string2, " C!");

    printf("%s\n", concat_strings(string1, string2));

    return 0;
}

char *concat_strings(char *str1, char *str2)
{

    char *result;

    result = (char *) calloc((strlen(str1) + strlen(str2)), sizeof(char));

    strcat(result, str1);
    strcat(result, str2);

    return result;
}