#include<stdio.h>
int main(){
    int a,count =0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
    for(int j=i+1;i<a;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                count = count + 1;
            }
            
        }
    }
    printf("%d %d",i,j);
    return 0;

}