#include<stdio.h>
#include<limits.h>
int main(){
    int a,found =0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0;i<a;i++){
        if(min>arr[i]){
            smin = min;
            min =arr[i];
        }
        else if(smin>arr[i] && min != arr[i]){
                smin =arr[i];
                found =1;
        }
        
        
    }
    if(found==1){
        printf("%d",smin);
    }
    else{
        printf("-1");
    }
    
    return 0;
}