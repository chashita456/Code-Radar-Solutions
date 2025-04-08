#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int count =0;
    int  str1[256]= {0};

    
    for(int i=0;str[i]!='\0';i++){
        if(!str1[(unsigned char)str[i]]){
        
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count =count +1;
                str1[(unsigned char)str[j]] = 1;
            }
        }
        }
        
        
    }
    printf("%d",count);
    return 0;
}