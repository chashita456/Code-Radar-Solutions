#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int brr[a];


    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        brr[i]= arr[a-i-1];
    }
    int palindrome=1;
    for(int i=0;i<a;i++){
    if(brr[i]!=arr[i]){
        palindrome=0;
        break ;
    }
    }
    if(palindrome==1){
        printf("YES");
    }
    else(
        printf("NO");
    )
    return 0;
}



