#include<stdio.h>
int rev(int arr[n],int a);
int palidrome(int arr[n],int a);
int rev(int arr[],int a){
    for(int i=0;i<=a/2;i++){
        int first = arr[i];
        int second =arr[a-i-1];
        arr[i] = second;
        arr[a-i-1] = first;
        
    }
    for(int i=0;i<=a;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int palidrome(int arr[],int a){
    for(int i=0;i<a/2;i++){
        if(arr[i]==arr[a-i-1]){
            printf("palidrome");
        }
        else{
            printf("not palidrome");
        }
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[n];
    for(int i=0;i<=10;i++){
        scanf("%d",&arr[i]);
    }
    return 0;
}

    
