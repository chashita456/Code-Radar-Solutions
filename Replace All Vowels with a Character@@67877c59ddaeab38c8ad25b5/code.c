#include<stdio.h>
#include<string.h>
int main(){
    char  str[100];
    char d;
    scanf("%c",&d);
    
    scanf("%s",str);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            str[i]=d;
        }   
    }
    printf("%s",str);
    return 0;

}