#include<stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]); 
    }
    for(int i=0;i<n;i++){
        num=arr[i];
        sum=0;
        while(n!=0){
            int digit=n%10;
            sum =sum+digit;
            n=n/10;
        }
        printf("%d",arr[i],sum);
}


    





return 0;
}

