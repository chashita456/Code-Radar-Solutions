#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int word =1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == ' '&& str[i+1] != " " && str[i+1] != '\0' ){
            word = word +1;
        }
    }
    printf("%d",word);
    return 0;
}
