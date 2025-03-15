#include<stdio.h>
int reverse( int arr[],int si,int ei);
int reverse( int arr[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i] =arr[j];
        arr[j] =temp;
    }
    
}
int main(){
    int a,k;
    scanf("%d",&a);
    scanf("%d",&k);
    int arr[a];
    
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    k=k%a;
    reverse(arr, 0,a-1);
    reverse(arr, 0,k-1);
    reverse(arr, k,a-1);
    for(int i=0;i<a;i++){
        printf("%d",arr[i]);
    }
    return 0;

}