#include <stdio.h>

int i = 0;

void toggleVowels(char *str) {
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = toupper(ch);
        }
        else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            str[i] = tolower(ch);
        }
    }
}

int main() {
    char myString[2];

    printf("Original String: ");
    gets(myString);

    toggleVowels(myString);

    printf("Modified String: %s\n", myString);
}
