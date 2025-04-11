#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int flag;
    for(int i=0;str[i]!=0;i++){
        flag =1;
        for(int j=i+1;str[j]!=0;j++){
            if(str[i]==str[j]){
                flag =0;
                break;
            }
        }
        if(flag==1){
            printf("%c",str[i]);
        }
    }
    return 0;
}