#include<studio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
    int max = int_min;
    int smax =int_min;
    for(int i=0;i<a;i++){
        if(max<arr[i]){
            max=smax;
            max=arr[i];
        }
        else if(smax<arr[i] && arr[i]!=max){
            smax =arr[i];
        }
    }
    printf("%d",smax);
    return 0;
    
    }


