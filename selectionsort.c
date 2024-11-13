#include<stdio.h>
int main(){
    int arr[5]={8,3,1,9,4};
    int n=5;
    for(int i=0; i<n-1; i++){
        int minindex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
    printf("sorted array is :");
    for(int i=0; i<n; i++){      
        printf("%d ",arr[i]);
    }   
    return 0;
}