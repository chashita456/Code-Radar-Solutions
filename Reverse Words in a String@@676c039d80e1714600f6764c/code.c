#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len =0;
    len = strlen(str);
    for(int i=0;str[i]!='\0';i++){
        for(int i=len;i>0;i--){
            printf("%s",str);
        }

    }
    return 0;
}