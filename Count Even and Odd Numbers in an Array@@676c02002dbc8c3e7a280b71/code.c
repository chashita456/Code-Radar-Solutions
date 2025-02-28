#include<stdio.h>
int countodd(int arr[n],int a);
int counteven(int arr[n],int a);
int countodd(int arr[n],int a){
    for(int i=0;i<=a;i++){
        int count =0;
        if(arr[i]%2!=0){
            count =count +1;
        }
    }
}
int counteven(int arr[n],int a){
    for(int i=0;i<=a;i++){
        int count =0;
        if(arr[i]%2==0){
            count =count +1;
        }
    }
    int main(){
        int a;
        scanf("%d",&a);
        int arr[n];
        scanf("%d",&arr[n]);
        printf("%d",countodd (arr,a));
        printf("%d",counteven (arr,a));
        return 0;
        
    }

}
