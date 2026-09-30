#include <stdio.h>

int main(void)
{
    int total_seconds;
    int minutes, seconds;

    printf("Input the seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        return 1;
    }

    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("The time is %d:%02d\n", minutes, seconds);

    return 0;
}