#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int flag =0;
    for(int i=0;str[i]<0;i++){
        if(str[i]=='0'||str[i]=='1')&&(str[i]!=1||str[i]!=2|| str[i]!=3|| str[i]!=4 || str[i]!=5|| str[i]!=6|| str[i]!=7|| str[i]!=8 || str[i]!=9){
             flag =1;
             

        }
    }
    if(flag==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}