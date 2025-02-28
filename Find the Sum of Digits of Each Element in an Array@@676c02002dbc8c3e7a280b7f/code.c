#include<stdio.h>

int main()
{
    int a,n ,digit,sum=0;
    scanf("%d",&a);
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
    scanf("%d",&arr[i]);
    }
    while(a!=0){
        digit= a%10;
        sum=sum+digit;
        a=a/10;
    }
    printf("%d",arr[sum]);



    return 0;
}