//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        switch(i) {
            case SUNDAY: printf("SUNDAY = %d\n", i); break;
            case MONDAY: printf("MONDAY = %d\n", i); break;
            case TUESDAY: printf("TUESDAY = %d\n", i); break;
            case WEDNESDAY: printf("WEDNESDAY = %d\n", i); break;
            case THURSDAY: printf("THURSDAY = %d\n", i); break;
            case FRIDAY: printf("FRIDAY = %d\n", i); break;
            case SATURDAY: printf("SATURDAY = %d\n", i); break;
        }
    }
    return 0;
}
