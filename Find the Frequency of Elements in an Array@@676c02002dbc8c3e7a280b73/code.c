#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count  =1;
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<a;i++){
        for(int j=0;j<a;j++){
            
            if (arr[i]==arr[j]){
                count++;  
            }
        }
        

    }
    printf("%d %d",arr[i],count);
    return 0;
}