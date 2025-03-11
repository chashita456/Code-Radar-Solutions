#include<stdio.h>
int main(){
    int a,int count =0;;
    scanf("%d",a);
    int idx =-1;
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<a;i++){
        for(int j=0;j<a;j++){
            idx = i;
            if arr[i]==arr[j]{
                printf("%d %d",arr[i],idx);
                
            }
        }
        

    }
    return 0;
}