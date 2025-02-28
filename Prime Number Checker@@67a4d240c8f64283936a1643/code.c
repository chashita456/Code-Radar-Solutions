#include<stdio.h>
int prime(int a);
int prime( int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
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
    int a,prime=0;
    scanf("%d",&a);
    prime(a);
}