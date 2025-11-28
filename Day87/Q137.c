/*Q137 Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.*/

#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    printf("Select a role (0-ADMIN, 1-USER, 2-GUEST): ");
    int input;
    scanf("%d", &input);

    if (input < 0 || input > 2) {
        printf("Invalid role selection!\n");
        return 1;
    }

    role = input;

    switch (role) {
        case ADMIN:
            printf("ADMIN: You have full access.\n");
            break;
        case USER:
            printf("USER: You have limited access.\n");
            break;
        case GUEST:
            printf("GUEST: You have view-only access.\n");
            break;
    }

    return 0;
}