#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j=n-1-i;j>=i;j--){
            printf(" ");
        }
        for(int k =0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}