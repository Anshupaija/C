#include <stdio.h>

int checkVowelOrConsonant(char ch);

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    int result = checkVowelOrConsonant(ch);

    if (result == 1) {
        printf("%c is a vowel.\n", ch);
    } else if (result == 0) {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}

int checkVowelOrConsonant(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return 1;
        } else {
            return 0; 
        }
    } else {
        return -1;
    }
}
