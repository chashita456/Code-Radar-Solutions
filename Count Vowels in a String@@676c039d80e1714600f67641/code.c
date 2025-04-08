#include<stdio.h>
#include<string.h>
int main(){
    int len;
    char str[100];
    scanf("%s",str);
    len = strlen(str);
    int count =0;
    for(int i=0;i<=len-1;i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i]=='o' || str[i]=='u')
{
        count =count +1;
    }
}
    printf("%d",count);
    return 0;
}




