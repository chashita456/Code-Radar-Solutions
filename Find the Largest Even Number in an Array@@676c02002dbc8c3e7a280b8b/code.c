#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int found =0;
    for(int i=0;i<=a;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    for(int i=0;i<=a;i++){
        if(arr[i]>max && arr[i]%2==0){
            max =arr[i];
            found =1;


        }
    }
    if(found==1){
        printf("%d",arr[i]);
    }
    else{
        printf("-1");
    }
    return 0;
}