#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int prime =0;
    for(int i=0;i<a;i++){
        if(arr[i]%a==0){
            prime=0;
            break;
        }
    }
    for(int i=0;i<a;i++){
        int count =1;
        if(prime==1){
            count =count +1;
        }
        printf("%d",count);
    
    
        
    }
    return 0;

}