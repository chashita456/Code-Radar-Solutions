#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        int sum=0;
        int num = arr[i];
        while(num!=0){
            int digit = num%10;
            sum =sum+digit;
            num=num/10;

        }
        printf("%d",sum);
    }
    
    return 0;
}