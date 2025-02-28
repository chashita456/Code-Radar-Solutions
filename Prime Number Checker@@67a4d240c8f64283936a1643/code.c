#include<stdio.h>
int prime(a);
int prime(a){
    for(int i=2;i<=a/2;i++){
        if(i%j==0){
            prime=0;
            break;

        }
    }
    if (prime==1){
        return 1;
    }
    else{
        return 0;
    }

int main()
{
    int a;
    scanf("%d",&a);
    prime(a);
}