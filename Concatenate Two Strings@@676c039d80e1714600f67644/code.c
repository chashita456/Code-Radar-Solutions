#include<stdio.h>
#include<string.h>
int main(){

    char s[100];
    char s1[100];
    scanf("%s",s);
    scanf("%s",s1);
    strcat(s,s1);
    printf("%s",s);
    return 0;
}