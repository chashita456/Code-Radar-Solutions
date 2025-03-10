#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<=a;i++){
        scanf("%d",&arr[i]);
    }
    int brr[a];
    for(int i=0;i<=a;i++){
        brr[i] =arr[a-i-1];
    }
    int palidrome=1;
    for(int i=0;i<=a;i++){
        arr[i]!=brr[i];
        palidrom =0;
        break;
    }
    if(palidrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

    
