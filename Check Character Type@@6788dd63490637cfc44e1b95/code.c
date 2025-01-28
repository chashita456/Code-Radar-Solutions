#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'|| ch=='I'||ch=='0'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'){
        printf("Vowel");
    }
    else if(ch=='B'||ch=='C'||ch=='D'||ch=='F'|| ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='N'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z'||ch=='c'||ch=='b'||ch=='d'||ch=='f'ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
        printf("Consonant");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
