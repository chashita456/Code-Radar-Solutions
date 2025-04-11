#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int duplicate =0;
    scanf("%s",str);
    for(int i=0;str[i]!=0;i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                duplicate =1;
                break;
            }
        }
        if(duplicate==0){
            printf("%c",str);
        }
    }
    return 0;
}