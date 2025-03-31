#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0;i<a;i++){
        if(arr[i]<min){
            smin = min;
            min = arr[i];
        }
        else if((arr[i]<smin) && min!=arr[i] ){
            smin =arr[i];
        }

    }
    printf("%d",arr[i]);
    return 0;

}