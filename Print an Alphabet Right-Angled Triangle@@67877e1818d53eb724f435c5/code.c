#include<stdio.h>
int main(){
    char a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}