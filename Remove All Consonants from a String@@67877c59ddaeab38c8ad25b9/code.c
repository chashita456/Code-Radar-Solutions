#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    fgets(str,sizeof(str),stdin);
    int j =0;

    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='A'|| str[i]=='E'|| str[i]=='O'|| str[i]=='U'){
           str1[j++]=str[i];
        }
    }
    str1[j]='\0';
    printf("%s",str1);
    return 0;
}