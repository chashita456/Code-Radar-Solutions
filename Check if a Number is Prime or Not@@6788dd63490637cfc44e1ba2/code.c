#include<stdio.h>
int main(){
    int a,prime=0;
    scanf("%d",&a);
    for(int i=2;i<=a/2;i++){
       if(a%i==0){
        prime=1;
        break;
       }
       
    }
    if(prime==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}