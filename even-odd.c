#include<stdio.h>
int main(){
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    if(x %2==0){
        printf("it is even number");
    }
    else{
        printf("it is odd number");
    }
    return 0;
}