#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    
    for(int i=0;str[i]!=0;i++){
        int count =1;
        for(int j=i+1;str[j]!=0;j++){
            if(str[i]==str[j]){
                count =count +1;
            }
        }
        printf("%d",count);
        
    }
    return 0;
}