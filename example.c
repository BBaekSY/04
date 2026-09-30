#include <stdio.h>

int main(void)
{
    int total_seconds;
    int hours, minutes, seconds;

    printf("Input the seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        return 1;
    }

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("The time for %d seconds is %d:%02d:%02d\n",
           total_seconds, hours, minutes, seconds);

    return 0;
}