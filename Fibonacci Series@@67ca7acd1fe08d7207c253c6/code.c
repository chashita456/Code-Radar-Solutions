#include<stdio.h>
int fib(int a);
int fib(int a){
    if(a == 1){
        return 0;
    }
    if(a == 2){
        return 1;
    }
    int fibN = fib(a - 1) + fib(a - 2); // Corrected recursive call
    return fibN;
}

int main(){
    int a;
    
    scanf("%d", &a);
    if(a <= 0){
        printf("Invalid input\n");
    } else {
        printf("%d", fib(a));
    }
    return 0;
}

