#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(intj=0;j<n;j++){
            if(i==1|| i==5 || j==1 || j==5){
                printf("*");
            }
            else{
                print();
            }
            print("\n");
        }
    }
    return 0;
}