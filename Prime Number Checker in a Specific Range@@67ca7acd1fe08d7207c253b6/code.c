#include<stdio.h>
int prime(int n,int a);
int prime(int n, int a){
    for(int i=n;i<=a;i++){
        prime =1;
        for(int j=n;j*j<=i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d\n",i);
        }

        
    }
    int main(){
        int n,a,prime,i,j;
        scanf("%d",&n);
        scanf("%d",&a);
        prime(a);
        return 0;

    }
}