#include<stdio.h>
int main(){
    int a,sorted;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(arr[i]>arr[i+1]){
            sorted =0;
            break;
        }
    }
    if (sorted ==1){
        printf("Sorted");
    }
    else{
        printf("Not sorted");
    }
    
    
    return 0;
}