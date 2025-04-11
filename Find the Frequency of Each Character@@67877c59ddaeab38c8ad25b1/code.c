#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char visited[100];
    int count =0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(visited[i]==0){
            for(int j=i+1;str[j]!=0;j++){
                count = count +1;
                visited[j]=1;
            }
        }
        printf("%s: %d",str[i],count);
    }
    return 0;
    
}