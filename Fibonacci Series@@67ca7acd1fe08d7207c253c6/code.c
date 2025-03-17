#include<stdio.h>
int printfib(int a);
int printfib(int a){
    if(a==1){
        return 0;
    }
    if(a==2){
        return 1;
    }
    int fibN =fib(a+1)+fib(a+2);
    return fibN;

}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",fib(a));
    return 0;
}
