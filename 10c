#include <stdio.h>

int main() {
    char tape[100];
    int head = 0;
    int state = 0;
    
    printf("Enter a string: ");
    scanf("%s", tape);
    
    // Move head to the end of zeros
    while (tape[head] == '0') {
        head++;
    }
    
    // Check if the remaining characters are ones
    while (tape[head] == '1') {
        head++;
        state = 1;
    }
    
    // Check if the machine reached the end of the string
    if (tape[head] == '\0' && state == 1) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    
    return 0;
}
