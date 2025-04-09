#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    

    for (int i = 0; str[i] != '\0'; i++) {
        int flag = 0;
        
        // Compare with every other character
        for (int j = i+1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                flag = 1;  // Found a duplicate
                break;
            }
        }

        if (flag == 0) {
            printf("%c", str[i]);
            return 0;
        }
        
    }

    
    return 0;
}
