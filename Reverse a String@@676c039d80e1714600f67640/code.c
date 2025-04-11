#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len =0;
    len = strlen(str);
    for(int i=len-1;i>=0;i--){
        printf("%s",str)
    }
    return 0;
}