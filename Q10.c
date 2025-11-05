// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int sec, h, m, s;
    printf("Input seconds: ");
    scanf("%d", &sec);

    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;

    printf("Time is %d:%d:%d\n", h, m, s);
    return 0;
}
