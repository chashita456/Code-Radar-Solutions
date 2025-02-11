#include<stdio.h>
int main(){
    int a,i,prime=0;
    scanf("%d",&a);
    for(i=2;i<=a/2;i++){
        i%a=0;
        prime=1;
        break;
    }
    if(prime==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;

}