 #include <stdio.h>

void generateStrings(int n, int aCount, int bCount, int cCount, char* string) {
    if (aCount == n && bCount == n && cCount == n) {
        // Print the generated string
        printf("%s\n", string);
        return;
    }

    if (aCount < n) {
        string[aCount + bCount + cCount] = 'a';
        generateStrings(n, aCount + 1, bCount, cCount, string);
    }

    if (bCount < n) {
        string[aCount + bCount + cCount] = 'b';
        generateStrings(n, aCount, bCount + 1, cCount, string);
    }

    if (cCount < n) {
        string[aCount + bCount + cCount] = 'c';
        generateStrings(n, aCount, bCount, cCount + 1, string);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid value of n. It should be greater than or equal to 1.\n");
        return 0;
    }

    char string[3 * n + 1];
    string[3 * n] = '\0';

    printf("Generated strings for the language {a^n b^n c^n | n = 1}:\n");
    generateStrings(n, 0, 0, 0, string);

    return 0;
}

