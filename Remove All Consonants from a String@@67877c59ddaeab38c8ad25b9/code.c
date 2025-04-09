#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int flag =0;
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='0'||str[i]=='u'||str[i]=='A'|| str[i]=='E'|| str[i]=='O'|| str[i]=='U'){
           flag =1;
        }
    }
    if(flag==1){
        printf("%s",str);
    }
    else{
        printf("");
    }
    return 0;
}