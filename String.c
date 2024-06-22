#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello ";
    char str2[] = "World";

    printf("Length of Str is: %ld\n", strlen(str1));

    printf("Strcat of Str is: %s\n", strcat(str1,str2));

    printf("Strev of Str is: %s\n", strrev(str1));

    printf("Stupr of Str is: %s\n", strupr(str1));

    printf("Stlwr of Str is: %s\n", strlwr(str1));
    
    printf("Stcpy of Str is: %s\n", strcpy(str1,str2));

    printf("Stcpy of Str is: %s\n", strcmp(str1,str2));


    return 0;
}