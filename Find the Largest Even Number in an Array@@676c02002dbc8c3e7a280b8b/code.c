#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int max = INT_MIN;
    int found =0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(max<arr[i] && arr[i]%2==0){
            max = arr[i];
            found =1;
    }
    }
    if(found){
        printf("%d",max);
    }
    else{
        printf("-1");
    }
    return 0;
}
