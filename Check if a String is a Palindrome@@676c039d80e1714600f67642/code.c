#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    int len =0;
    scanf("%s",str);
    len =strlen(str);
    int palindrome = 1;
   
    for(int i=0; i<len;i++){
        if(str[i] != str[len-i-1]){
            palindome = 0;
            break;
        }
    }
    if(palindome == 1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
        