#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int duplicate;
    scanf("%s",str);
    for(int i=0;str[i]!=0;i++){
        duplicate =0;
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                duplicate =1;
                break;
            }
        }
        if(duplicate==0){
            printf("%c",str[i]);
        }
    }
    return 0;
}