#include<stdio.h>
int main(){
    int a,prime =0,count=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=2;j<a/2;j++){
        if(arr[i]%j==0){
            prime = 1;
            break;
        }

    }
    if(prime==0){
        count =count +1;
    }
    printf("%d",count);
    return 0;
}
