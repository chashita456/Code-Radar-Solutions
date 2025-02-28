#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int countodd =0;
    int counteven =0;
    for(int i=0;i<=n;i++){
        if(arr[i]%2==0){
            counteven++;
        }
        else{
            countodd++;

        }
        
    

        

    }
    printf("%d %d",counteven ,countodd);
    
    return 0;
}

