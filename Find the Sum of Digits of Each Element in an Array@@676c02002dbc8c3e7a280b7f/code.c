#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum =0;
    int arr[a];
    for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
    while(a!=0){
        int digit = arr[i]%10;
        sum = sum+digit;
        arr[i]= arr[i]\10;
    }
    printf("%d",sum);
    return 0;
    
    

}
    



