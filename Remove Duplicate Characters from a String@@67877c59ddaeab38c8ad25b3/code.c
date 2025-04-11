#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char result[100];
    char visited[100]={0};
    int duplicate =0;
    int k;
    
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!=0;j++){
                if(str[i]!=str[j]){
                    duplicate =1;
                    break;
                }
            }
    
    if(duplicate=1){
        printf("%s",str);
        
    }   
    } 
    return 0;
}
    
