#include<studio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int flag =0;
    for(int i=0;str[i]!=0;i++){
        for(int j=i+1;str[j]!=0;j++){
            if(str[i]!=str[j]){
                flag =1;
            }
        }
        if(flag==1){
            printf("%c",str[i]);
        }
    }
    return 0;
}