#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    int count{26}= {0};
    fgets(str,sizeof(str),stdin)
    fgets(str1,sizeof(str1),stdin);
        if(strlen(str)!=strlen(str1)){
            printf("No");
        }
        for(int i=0;str[i]!='\0';i++){
            count(str -'a')++;
        }
         for(int i=0;str1[i]!='\0';i++){
            count(str1 -'a')--;
        }
        for(int i=0;i<26;i++){
            if(count[i]!=0){
                printf("NO");
                return 0;
            }
        }
        printf("YES");
        return 0;
    
    
}