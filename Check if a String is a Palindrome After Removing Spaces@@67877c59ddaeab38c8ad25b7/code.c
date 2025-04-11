#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j =0;
    len = strlen(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
    }
    if(str == str[len-i-1]){
        printf("Yes");
    }
    else{
        printf("NO");
    }
    return 0;