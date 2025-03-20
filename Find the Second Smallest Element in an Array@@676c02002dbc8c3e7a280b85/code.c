#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    scanf("%d",&arr[i]);
    int min = INT_MAX;
    int smin = INT_MIN;
    for(int i=0;i<a;i++){
        if(min>arr[i]){
            smin = min;
            min =arr[i];
        }
        else if(smin>arr[i] && min != arr[i]){
                smin =arr[i];

            
        }
        
    }
    printf("%d",smin);
    return 0;
}