#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char a;
    char b;
    char temp;
    scanf("%s",str);
    scanf("%s",&a);
    scanf("%s",&b);
    for(int i=0;str!='\0';i++){
        temp = a;
        a=b;
        b=temp;  
    }
    printf("%s",str);
    return 0;

}