#include <stdio.h>
int main()
{
    int year = 2024;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("This Year is Leap Year");
    }
    else
    {
        printf("This Year is Not Leap Year");
    }
    return 0;
}







