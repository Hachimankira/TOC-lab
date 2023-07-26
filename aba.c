#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// DFA transition function
int dfaTransition(int currentState, char input) {
    switch (currentState) {
        case 0:
            if (input == 'a')
                return 1;
            break;
        case 1:
            if (input == 'b')
                return 2;
            else if (input == 'a')
                return 1;
            break;
        case 2:
            if (input == 'a')
                return 3;
            else if (input == 'b')
                return 2;
            break;
        case 3:
            if (input == 'a')
                return 1;
            else if (input == 'b')
                return 2;
            break;
    }

    return -1; // Invalid state or input
}

// DFA string acceptance function
bool isAccepted(char *str) {
    int currentState = 0;
    int i = 0;

    while (str[i] != '\0') {
        currentState = dfaTransition(currentState, str[i]);
        if (currentState == -1)
            return false;

        i++;
    }

    return (currentState == 3); // Check if the final state is accepting
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isAccepted(str))
        printf("Accepted\n");
    else
        printf("Not Accepted\n");

    return 0;
}
