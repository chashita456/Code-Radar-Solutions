#include<stdio.h>
int main(){
    char str[100];
    int l;
    l = strlen(str);
    for(i=0;i<l;i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count =count+1;
        }

    }
    printf("%d",count);
    return 0;
}