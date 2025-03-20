#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int found =0;
    int min = INT_MAX;
    for(int i=0;i<a;i++){
        if(min>arr[i]){
            min = arr[i];
            found =1;
        }

    }
    if(found){
        printf("%d",min);
    }
    else{
        printf("-1");
    }
    return 0;
}