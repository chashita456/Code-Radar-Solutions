#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<=a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=a;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else if(min>arr[i]){
            min =arr[i]
        }
        printf("%d",min ,max);
    }
    return 0;
}