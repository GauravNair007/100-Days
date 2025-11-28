//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,
    TIMEOUT = 20
};

int main() {
    printf("Enum values stored as integers:\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    int x = SUCCESS;
    printf("Assigned SUCCESS to integer variable x: x = %d\n", x);

    return 0;
}