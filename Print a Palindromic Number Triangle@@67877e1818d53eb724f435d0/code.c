#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j = a-1;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int k=a;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    
        

    
    return 0;
}