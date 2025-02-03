#include <stdio.h>
int main(){
char operator;
int num1,num2;
scanf("%c",&operator);
scanf("%d",&num1);
scanf("%d",&num2);
switch(operator){
    case '+':
    printf("%d",num1+num2);
    break;
    case'-':
    printf("%d",num1-num2);
    break;
    case'*':
    printf("%d",num1*num2);
    break;
    case"/":
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
    


    
    


