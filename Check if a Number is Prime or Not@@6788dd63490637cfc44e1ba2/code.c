#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a/2;i++){
        i%a==0;
        prime=1;
        break;
    }
    if(prime==0){
        printf("Prime");
    }
    else{
        print("Not Prime");
    }
    return 0;
}