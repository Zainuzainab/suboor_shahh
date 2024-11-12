#include<stdio.h>
int main(){
    int sum=0;
    int arr[]={1,20,3,14,5};
    for(int i=0; i<=4; i++){
        printf("%d\n",arr[i]);
        sum+=arr[i];
    }
    printf(" sum is %d\n",sum);
    return 0;
    
}