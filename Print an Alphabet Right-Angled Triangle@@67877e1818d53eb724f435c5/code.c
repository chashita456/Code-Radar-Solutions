#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch;
    for(int i=1;i<=n;i++){
        ch ='A';
        for(int j=1;j<=i;j++){
            printf("%d",ch);
            ch++;
        }
    }
    return 0;
}