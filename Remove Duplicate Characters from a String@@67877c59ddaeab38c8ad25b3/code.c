#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char visited[100]={0};
    isduplicate =0;
    
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!=0;j++){
                if(str[i]==str[j]){
                    isduplicate =1;
                    break;
                }
            }
    
    if(isduplicate==1){
        printf("%s",str[i]);
    }   
    } 
    return 0;
}
    
