#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char ch ;
    for(int i=1;i<=a;i++){
        ch = 'A';
        for(int j=1;j<=a;j++){
            printf("%c",ch);
            ch++;
        }
    }
    return 0;
}