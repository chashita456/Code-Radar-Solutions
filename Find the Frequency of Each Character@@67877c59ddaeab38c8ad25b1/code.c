#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
   
    int visited[100] ={0};
    for(int i=0;str[i]!='\0';i++){
         int count =0;
   
        if(visited[i]) continue;
        for(int j=i+1;str[j]!='\0';j++){
                if(str[i]==str[j]){
                    count = count +1;
                    visited[j]=1;
                }   
        }
        printf("%c: %d\n",str,count);
        return 0;

    }
}