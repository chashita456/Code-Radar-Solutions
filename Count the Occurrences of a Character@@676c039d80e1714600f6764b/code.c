#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int visited[100] = {0};

    scanf("%s",str);
    int count =0;
    for(int i=0;str[i]!='\0';i++){
        if (visited[i]) continue;
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count = count +1;
                visited[j] =1;
            }

        }

    }
    printf("%d",count);
    return 0;

}