#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!=0;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]= str[i]-32;
        }
    }
    printf("%s",str);
    return 0;
}