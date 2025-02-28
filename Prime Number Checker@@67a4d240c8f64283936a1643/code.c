#include<stdio.h>
int main(int num){
    int factor =0;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            factor++;
        }
    }
    if(factor==1){
        return 1;
    }
    else{
        return 0;
    }
}


