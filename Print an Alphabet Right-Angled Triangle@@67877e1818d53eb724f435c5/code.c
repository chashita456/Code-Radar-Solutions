#include<stdio.h>
int main(){
    char a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        a='A';
        for(int j=1;j<=i;j++){
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}