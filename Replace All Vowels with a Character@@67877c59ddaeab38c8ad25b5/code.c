#include<stdio.h>
#include<string.h>
int main(){
    char  str[100];
    char a;
    scanf("%c",&a);
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            str[i]==a;
        }   
    }
    printf("%s,str");
    return 0;

}