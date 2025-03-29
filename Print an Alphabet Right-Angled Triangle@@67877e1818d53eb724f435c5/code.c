#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char ch ;
    for(int i=0;i<=a;i++){
        ch ='A';
        for(int j =0;j<=a;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}