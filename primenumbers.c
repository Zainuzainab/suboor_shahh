#include <stdio.h>
int main()
{
    int num=7;
    if(num==0 || num==1){
        printf("the num is not prime");
    }
    else if(num ==2){
        printf("the num is prime");
    }
    else{
        for(int i=3;i*i<=num;i++){
            if(num % i==0){
                printf("the number is not prime");
            }
            else{
                printf("the number is prime");
            }
        }
    }
    return 0;
}