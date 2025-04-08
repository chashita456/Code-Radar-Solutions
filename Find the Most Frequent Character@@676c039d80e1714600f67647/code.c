#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    
    int max = 0;
    char mostFrequent;
    fgets(str, sizeof(str), stdin);
    for(int i =0;str[i]!=0;i++){
        int count = 1;
        if(str[i] !=' ' && '\n'){
            for(int j= i+1;str[j]!=0;j++){
                if(str[i]==str[j]){
                    count =count +1;
                }
            }
        }
    
    if(max<count){
        max = count;
        mostfrequent = str[i];
    }
    }
    printf("%s",str[i]);
    return 0;
}


   
