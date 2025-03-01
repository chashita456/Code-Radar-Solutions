#include<stdio.h>
int main(){
    int n;
    char ch;
    for(int i=0;i<=n;i++){
        ch ='A';
        for(int j=0;j<=i;j++){
            printf("%d",ch);
            ch++;
        }
    }
    return 0;
}