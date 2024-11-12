#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    
    printf("enter five elements");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0; i<n; i++){ 

         if(arr[i]>max){
            max=arr[i];
         }

    }
        printf("this is the maximum value %d",max);

    return 0;
      
}
