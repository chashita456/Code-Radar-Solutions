#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
    int max = arr[0];
    int min =arr[0];
    for(int i=0;i<a;i++){
        if(int max<arr[i]){
            max = arr[i];
        }
        else if(int min>arr[i]){
            min = arr[i];
        }
    }
        return 0;
    }
