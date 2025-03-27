#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-1;j--){
            for(int k=1;K<=i;k++){
                printf("*");
            }
            for(int k=i-1;k>=1;k--){
                printf("*");
            }
        }
    }
    return 0;
}