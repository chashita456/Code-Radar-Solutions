#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=1;i<=a;i++){
        scanf("%d",&arr[i]);
    }

    int max = INT_MIN;
    int min =INT_MAX;
    for(int i=1;i<=a;i++){
        if(arr[i]> max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
        printf("%d",min,max);

    }
    return 0;
}
        