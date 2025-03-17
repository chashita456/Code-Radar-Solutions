#include<stdio.h>
int fib(int a);
int fib(int a){
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
