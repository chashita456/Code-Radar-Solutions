#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    int len =0;
    scanf("%s",str);
    len =strlen(str);
    char str1[100];
    str1 == str;
    for(int i= len -1; i>=0;i--){
        if(str[i] == str1[i]){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}