#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int max=a[0];
    for(int i=0;i<=5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
        printf("%d",max); 

    
  
    return 0;
    
}    
