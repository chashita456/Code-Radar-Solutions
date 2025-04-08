#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str,sizeof(str),stdin);
    int max =0;
    char most frequent;
    for(int i =0;str[i]!=0;i++){
        int count =1;
        if(str[i]=='' && "\n"){
        for(int j=i+1;str[j]!='\0';j++){
            if(arr[i]==arr[j]){
                count =count +1;
            }
        }
        }

        if(maxcount<count){
            maxcount = count;
            mostfrequent = str[i];
        }
    }
    

    printf("%s",mostfrequent);
    return 0;
}
    
