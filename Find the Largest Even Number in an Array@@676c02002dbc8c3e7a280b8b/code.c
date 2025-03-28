#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max =INT_MIN;
    int found =0;
    for(int i=0;i<a;i++){
        if(arr[i]>max && arr[i]%2==0){
            arr[i]=max;
            found=0;
        }
    }
    if(found==0){
        printf("%d",max);
    }
    else{
        printf("-1");
    }
    return 0;

}