#include<stdio.h>
int main(){
    int num=123,rev=0;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }  
    printf("reversed number is %d",rev);
    return 0;

}