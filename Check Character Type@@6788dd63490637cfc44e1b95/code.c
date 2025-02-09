#include<stdio.h>
int main(){
    char a;
    scanf("%c",a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='0' || a=='U'){
        printf("Vowel");
    }
    else if(a=='b' || a=='c' || a=='d' || a=='f' || a=='g' || a=='h'|| a=='j'||a=='k'||a=='l'|| a=='m' || a=='n' || a=='r' || a=='p' || a=='q'  || a=='s' || a=='t' || a=='v' || a=='w' || a=='x' || a=='y' || a=='z' || a=='B' || a=='C' || a=='D' || a=='F' || a=='G' || a=='H'|| a=='J'||a=='K'||a=='L'|| a=='M' || a=='N' || a=='R'|| a=='P' || a=='Q'  || a=='S' || a=='T' || a=='V' || a=='W' || a=='X' || a=='Y' || a=='Z'){
        
        printf("Constant");
    }
    else if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
