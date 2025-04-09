#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int flag =0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='1' && str[i]!='0'){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("No");
    }
    else{
        printf("Yes");
    }
        
        

    return 0;
}