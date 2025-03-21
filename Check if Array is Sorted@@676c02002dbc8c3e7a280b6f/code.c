#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    scanf("%d",arr[a]);
    for(int i=0;i<a;i++){
        for(int j =i+1;j<a;j++){
            if(arr[i]<arr[j]){
                printf("Sorted");
            }
            else{
                printf("not sorted");
            }
        }
    }
    return 0;
}