#include <stdio.h>
#include <math.h>

int prime(int num){
    int i;
    if(num >2){
        for(i=2; i<= pow(num, 0.5);i++){
            if(num%i==0){
                return 0;
            }
        }
    }else if(num<=2){
        return 0;
    }
    return 1;


}

int main(){
    int n;
    printf("Enter a Number ; ");
    scanf("%d",&n);
    if(prime(n)){
    printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    return 0;
}


