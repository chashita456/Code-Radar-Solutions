#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b){
        printf("Profit");
    }
    else if(a>b){
        printf("Loss");
    }
    else{
        printf("NO profit No Loss");
    }
    return 0;
}