#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j=a;j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<=2*a+1;k++){
            printf("%d",k);
        }
        printf("\n");

    }
    return 0;
}