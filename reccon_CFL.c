#include <stdio.h>

int isAccepted(char *input) {
    int countA = 0;
    int countB = 0;

    // Count the number of 'a' and 'b' characters
    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == 'a') {
            countA++;
        } else if (input[i] == 'b') {
            countB++;
        } else {
            return -1; // Invalid character
        }
        i++;
    }

    // Check if the number of 'a' and 'b' characters are equal
    if (countA == countB) {
        return 1; // Accepted
    } else {
        return 0; // Not accepted
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    int result = isAccepted(input);
    if (result == 1) {
        printf("String \"%s\" belongs to the language {a^n b^n | n = 0}\n", input);
    } else if (result == 0) {
        printf("String \"%s\" does not belong to the language {a^n b^n | n = 0}\n", input);
    } else {
        printf("String \"%s\" contains an invalid character\n", input);
    }

    return 0;
}

