#include <stdio.h>

enum states {
    q0,
    q1,
    qf
};

int main() {
    enum states curr_state = q0;
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    int i = 0;
    char ch = input[i];

    while (ch != '\0') {
        switch (curr_state) {
            case q0:
                if (ch == 'a')
                    curr_state = q1;
                else if (ch == 'b')
                    curr_state = qf;
                else {
                    printf("Invalid input character: %c\n", ch);
                    return 0;
                }
                break;
            case q1:
                if (ch == 'a')
                    curr_state = q1;
                else {
                    printf("Invalid input character: %c\n", ch);
                    return 0;
                }
                break;
            case qf:
                if (ch == 'b')
                    curr_state = qf;
                else {
                    printf("Invalid input character: %c\n", ch);
                    return 0;
                }
                break;
        }

        ch = input[++i];
    }

    if (curr_state == q1 || curr_state == qf)
        printf("String \"%s\" is accepted\n", input);
    else
        printf("String \"%s\" is rejected\n", input);

    return 0;
}

