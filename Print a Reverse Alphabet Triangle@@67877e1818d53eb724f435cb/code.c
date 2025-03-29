#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char ch;
    for(int i=a;i>=1;i--){
        ch = 'D';
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
    } 
    printf("\n");
}
return 0;
}