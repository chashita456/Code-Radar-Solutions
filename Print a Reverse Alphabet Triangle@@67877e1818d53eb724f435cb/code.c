#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch;
    for(int i=n;i>=1;i--){
        ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
        
    }
    return 0;
}