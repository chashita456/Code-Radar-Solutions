#include<stdio.h>
int main(){
    int n,sum,a;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]); 
    }
    for(int i=0;i<n;i++){
        a=arr[i];
        sum=0;
        while(a!=0){
            int digit=a%10;
            sum =sum+digit;
            a=a/10;
        }
        printf("%d %d\n",arr[i],sum);
}
return 0;
}

