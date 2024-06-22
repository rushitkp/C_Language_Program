#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 1000
int main()
{
    FILE *file;
    char fileName[MAX_LENGTH];
    char line[MAX_LENGTH];
    // Get file name from the user
    printf("Enter file name: ");
    scanf("%s", fileName);
    // Open file in read mode
    file = fopen(fileName, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    // Print contents of the file line by line
    printf("Contents of the file '%s':\n", fileName);
    while (fgets(line, MAX_LENGTH, file) != NULL)
    {
        printf("%s", line);
    }
    // Close the file
    fclose(file);
    return 0;
}