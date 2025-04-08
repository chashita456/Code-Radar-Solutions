#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char a;
    char b;

    scanf("%s", str);
    scanf(" %c", &a);  // Note the space before %c
    scanf(" %c", &b);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == a) {
            str[i] = b;
        }
    }

    printf("%s\n", str);
    return 0;
}
