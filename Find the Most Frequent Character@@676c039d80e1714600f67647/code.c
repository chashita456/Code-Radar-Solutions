#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  // To store frequency of each ASCII character
    int max = 0;
    char mostFrequent;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch != ' ' && ch != '\n') {
            freq[(int)ch]++;
            if(freq[(int)ch] > max) {
                max = freq[(int)ch];
                mostFrequent = ch;
            }
        }
    }

    printf("Most frequent character: '%c' occurred %d times\n", mostFrequent, max);
    return 0;
}
