#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==1 && i==a || j==1 &&j==a){
                printf(*);
            }
            else{
                printf("*");
            }
        }
    }
    
        
    
    return 0;
}