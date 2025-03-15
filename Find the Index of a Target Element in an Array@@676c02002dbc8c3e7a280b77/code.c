#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);

    int arr[a];
    for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
    int idx = -1;
    for(int i=0;i<a;i++){
        
        if(arr[i] == b){
            int idx =i;
            break;
        }
        
    }
    if(idx !=-1){
        printf("%d",idx);
    }
    else{
        printf("-1");
    }
    return 0;

}