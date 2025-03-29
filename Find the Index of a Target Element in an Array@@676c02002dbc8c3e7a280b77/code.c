#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int idx =-1;
    int found=0;
    for(int i=0;i<a;i++){
        if(arr[i]==b){
            idx =i;
            found =1;
        }
    if(found==1){
        printf("%d",idx);
    }
    else{
        printf("-1");
    }
    }
    return 0;