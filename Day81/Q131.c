/*Q131 Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.*/

#include <stdio.h>

enum Days {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main() {
    enum Days day;

    printf("Days of the week with their integer values:\n");

    for (day = SUNDAY; day <= SATURDAY; day++) {
        switch(day) {
            case SUNDAY: printf("SUNDAY = %d\n", SUNDAY); break;
            case MONDAY: printf("MONDAY = %d\n", MONDAY); break;
            case TUESDAY: printf("TUESDAY = %d\n", TUESDAY); break;
            case WEDNESDAY: printf("WEDNESDAY = %d\n", WEDNESDAY); break;
            case THURSDAY: printf("THURSDAY = %d\n", THURSDAY); break;
            case FRIDAY: printf("FRIDAY = %d\n", FRIDAY); break;
            case SATURDAY: printf("SATURDAY = %d\n", SATURDAY); break;
        }
    }

    return 0;
}