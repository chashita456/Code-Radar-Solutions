#include<stdio.h>
int main(){
    int a,evennumber=0,oddnumber=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            evennumber = evennumber +arr[i];
        }
        else{
            oddnumber =oddnumber +arr[i];
        }
        printf("%d %d",evennumber,oddnumber);
    }
    
    return 0;
    

}

