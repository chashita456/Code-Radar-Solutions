#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j=a-1-i;j>=0;j--){
            printf(" ");
        }
        for(int k =0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=a-2;i>=0;i--){
        for(int j=a-1-i;j>=0;j--){
            printf(" ");
        }
        for(int k =0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}