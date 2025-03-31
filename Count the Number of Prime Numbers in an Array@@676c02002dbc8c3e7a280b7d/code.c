#include<stdio.h>
int main(){
    int a;int count =0;
    scanf("%d",&a);
    int arr[a];
    for(int i=2;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int prime =0;
    for(int i=0;i<a;i++){
        prime=1;
        if(arr[i]>2){
            prime=0;
        }
        for(int j=2;j>i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
    }

    
    if(prime==1){
        count =count +1;
    }
    printf("%d",count);
    return 0;
}