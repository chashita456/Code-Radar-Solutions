#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        int result=a+b;
        printf("%d",result);
    }
    else if(c=='-'){
        int difference=a-b;
        printf("%d",difference);
    }
    else if(c=='*'){
        int product=a*b;
        printf("%d",product);
    }
    else if(c=='/'){
        if (b!=0){
        int Division=a/b;
        printf("%d",Division);
    }
        else{
            printf("error");
        }
    }
    else{
        printf("error\n");
    }
    return 0;
}