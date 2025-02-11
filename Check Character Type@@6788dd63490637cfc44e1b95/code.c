#include<stdio.h>
int main(){
    char a;
    scanf("%d",&a);
    if(a>'a' && a<'z'){
        if(a=='a' || a=='e' || a=='i' || a=='o'|| a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
            printf("Vowel");
        }
        else{
            printf("Constant");
        }
    }
    else if(a>=0 && a<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}

        
    
    
