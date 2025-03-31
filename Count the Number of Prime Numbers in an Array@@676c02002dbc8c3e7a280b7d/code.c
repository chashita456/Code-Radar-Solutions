#include<stdio.h>
int main(){
    int a,int count =0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int prime =0;
    for(int i=0;i<a/2;i++){
        if(arr[i]%a==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        count =count +1;
    }
    printf("%d",count);
    return 0;
}