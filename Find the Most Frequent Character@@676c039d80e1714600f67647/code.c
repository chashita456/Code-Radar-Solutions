#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int max =0;
    char mostfrequrnt;
    for(int i=0;str[i]!='\0';i++){
        int count =1;
        if(str[i] == ' ' || str[i] == '\0')
        continue;
        for(int j =i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count =count +1;
            }
        }
        if(max<count){
            max = count;
            mostfrequrnt = str[i];

        
        }
    }
    printf("%c",mostfrequrnt);
    return 0;
}