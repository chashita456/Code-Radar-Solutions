#include<stdio.h>
int main(){
    int a,prime,count=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<a;i++){
        prime = 1;
         if (arr[i] < 2) {
            prime = 0; // Numbers less than 2 are not prime
        } else {
    
        for(int j=2;j*j<=arr[i];j++){
            if(arr[i]%j==0){
                prime =0;
                break;
            }
        }
        }
    

if(prime){
        count =count +1;
    }
    }
    printf("%d",count);
    return 0;
}

    

