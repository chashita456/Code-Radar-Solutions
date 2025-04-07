#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int l;
    int count =0;
    l = strlen(str);
    for( int i=0;i<l;i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count =count+1;
        }

    }
    printf("%d",count);
    return 0;
}