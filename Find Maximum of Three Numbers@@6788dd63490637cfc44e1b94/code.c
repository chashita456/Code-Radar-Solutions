#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        printf(a);
    }
    elseif(b>a && b>c){
        printf(b);
    }
    else{
        printf(c);
    }
    return 0;
    }
}