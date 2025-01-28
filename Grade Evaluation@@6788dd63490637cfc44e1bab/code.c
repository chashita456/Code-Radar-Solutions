#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&a);
    if(a==A){
        printf("Excellent");
    }
    else if(a==B)
    {
        printf("good");
    }
    else if(a==C){
        printf("Average");
    }
    else if(a==D){
        printf("Below Average");
    }
    else if(a==F){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}