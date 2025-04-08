#include <stdio.h>

int main() {
    int num, n, bit;

    
    scanf("%d", &num);

    
    scanf("%d", &n);

    bit = (num >> n) & 1;  
    printf("%d", bit);


    

    return 0;
}
