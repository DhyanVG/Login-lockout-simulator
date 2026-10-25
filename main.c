#include <stdio.h>

int main() {
    int correctPIN = 7754;
    int access = 0;
    int user_pin = 0;


    for (int attempts = 1; attempts <= 3; attempts++) {
        printf("What is the PIN? ");
        scanf("%d", &user_pin);

        if (user_pin != correctPIN) {
            printf("Incorrect PIN, attempts left: %d \n", 3 - attempts);
        } else {
            printf("Access Granted\n");
            access = 1;
            break;
        }
    }
    if (access == 0) {
        printf("Account Locked\n");
    }


    return 0;
}