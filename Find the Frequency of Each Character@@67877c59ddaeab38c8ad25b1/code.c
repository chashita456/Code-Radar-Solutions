#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char visited[100]={0};
    int count =1;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(visited[i]==1)
        continue;
        int count =1;


            for(int j=i+1;str[j]!=0;j++){
                if(str[i]==str[j]){
                count = count +1;
                visited[j]=1;
                }
            }
        
        printf("%c: %d\n",str[i],count);
    }
    return 0;
    
}