#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j =0;
    int len =0;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
    }
    for(int j=0;str[j]!=0;j++){
        len = strlen(str);
        if(str[j] == str[len-j-1]){
        printf("Yes");
        }
        else{
        printf("NO");
        }
    }
    return 0;

    

    
    

    }
    
    