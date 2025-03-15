#include<stdio.h>
int printprime(int n,int a);
int printprime(int n, int a){
    
    for(int i=n;i<=a;i++){
        int prime =1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d ",i);
        }

        
    }
}
int main(){
    int a,n;
    scanf("%d",&a);
    scanf("%d",&n);
    printprime(a,n);
    return 0;
}


    
