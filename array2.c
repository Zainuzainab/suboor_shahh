#include<stdio.h>
int main(){
    int a[]={1,2,15,20,5};
    for(int i=0; i<5; i++){
        a[i]+=5;
        printf("%d ",a[i]);
        

    }
    return 0;
}