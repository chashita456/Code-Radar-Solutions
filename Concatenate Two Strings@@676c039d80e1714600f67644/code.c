#include<stdio.h>
#include<string.h>
int main(){

    char s[100];
    char s1[100];
    fgets(s,sizeofs,stdin);
    fgets(s1,sizeofs1,stdin);
    
    strcat(s,s1);
    printf("%s",s);
    return 0;
}