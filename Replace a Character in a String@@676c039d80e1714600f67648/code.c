#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char a;
    char b;
    scanf("%s",str);
    scanf("%c",&a);
    scanf("%c",&b);
    for(int i=0;str!='\0';i++){
        if(str[i]== a){
            str[i]== b;
        }
    }
    printf("%s",str);
    return 0;

}