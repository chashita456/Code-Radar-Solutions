#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
    int printed[n];
        for(int i=0;i<a;i++){
            printed[i]==0;
        }
        for(int i=0;i<a;i++){
            if(printed[i]==0){
                int count =1;
                for(int j=i+1;j<a;j++){
                    if(arr[i]==arr[j]){
                        count++;
                        printed[j]=1;
                    }
                }
                printf("%d %d",arr[i],count);
            }
            
        }
        return 0;
    
    
}





        
    
