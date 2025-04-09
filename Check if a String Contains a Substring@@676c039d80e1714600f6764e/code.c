#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    cahr substr[100];
    fgets(str,sizeof(str),stdin);
    fgets(substr,sizeof(substr),stdin);
    if(strstr(str,substring) != NULL){
        printf("Yes");
    }
    else{
        printf("No");
    }


return 0;
}

