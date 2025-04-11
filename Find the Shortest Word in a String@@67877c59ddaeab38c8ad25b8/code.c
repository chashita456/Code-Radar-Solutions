#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len =0;
    int maxlen =0;
    
    for(int i=0;str[i]!=0;i++){
        len = strlen(str);
        if(len<maxlen){
            printf("str[i]");
        }
    


    }
    return 0;
}