#include <stdio.h>

int main()
{
    FILE *fptr;

    // Create a file on your computer (filename.txt)
    fptr = fopen("filename.txt", "w");

    // Open a file in read mode
    fptr = fopen("filename.txt", "r");
    // Store the content of the file
    char myString[100];
    // Read the content and print it
    while (fgets(myString, 100, fptr))
    {
        printf("%s", myString);
    }
    // Open a file in writing mode
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Some text");

    // Close the file
    fclose(fptr);

    return 0;
}
