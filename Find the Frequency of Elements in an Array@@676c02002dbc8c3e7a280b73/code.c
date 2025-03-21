#include<stdio.h>
int main(){
    int a,count =0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    
    for(int j=i+1;i<a;i++){
        scanf("%d",&arr[j]);
    }
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                count = count + 1;
            }
            
        }
    }
    for(int i=0;i<a;i++){
    printf("%d\ %d\n",i,count);
    }
    return 0;

}