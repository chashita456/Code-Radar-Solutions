#include <stdio.h>
int main(){
char A;
int num1,num2;

scanf("%d",&num1);
scanf("%d",&num2);
scanf("%c",&A);
switch(operator){
    case '+':
    printf("%d",num1+num2);
    break;
    case '-':
    printf("%d",num1-num2);
    break;
    case '*':
    printf("%d",num1*num2);
    break;
    case '/':
    if(num2!=0){
        printf("%d",num1/num2);
    }
    else{
        printf("error!not division by 0");
    }
    break;
    default:
    printf("invalid operator");
}
return 0;
}

    


    
    


