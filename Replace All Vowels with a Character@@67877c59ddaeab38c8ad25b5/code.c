#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[100];
    char d;
    int vowelIndex[100], count = 0;

    // Input the character to replace vowels
    scanf("%c", &d);
    getchar(); // consume newline

    // Input the string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove trailing newline

    // Find indexes of all vowels
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            vowelIndex[count++] = i;
        }
    }

    // Reverse the vowels using the given character
    for (int i = 0; i < count / 2; i++) {
        // swap the vowels
        char temp = str[vowelIndex[i]];
        str[vowelIndex[i]] = str[vowelIndex[count - i - 1]];
        str[vowelIndex[count - i - 1]] = temp;
    }

    // Replace all vowels with the character 'd'
    for (int i = 0; i < count; i++) {
        str[vowelIndex[i]] = d;
    }

    // Output result
    printf("%s\n", str);
    return 0;
}
