#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int evencount =0;
    int oddcount =0;
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            evencount =evencount +1;
        }
        else if(arr[i]%2!=0){
            oddcount = oddcount +1;
        }

    }
    printf("%d %d",evencount,oddcount);
    return 0;
}