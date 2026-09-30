#include <stdio.h>

int main(void)
{
    int year;
    int leap;

    printf("Input the year: ");
    if (scanf("%d", &year) != 1) {
        return 1;
    }

    leap = (year % 4 == 0 && year % 100 != 0)
           || (year % 400 == 0);

    printf("Is the year %d a leap year? %i\n", year, leap);

    return 0;
}