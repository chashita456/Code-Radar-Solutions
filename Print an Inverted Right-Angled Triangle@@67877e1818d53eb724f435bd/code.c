#include <stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(int i=a;i>=a;i--)
    {
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}