#include<stdio.h>
int fib(a);
int fib(a){
    if(a==1){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{
        for(int i=0;i<a;i++){
            fibN =fib(a-1) +fib(a-2);
            return fibN;
        }
    }
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",fib(a));
    return 0;
}