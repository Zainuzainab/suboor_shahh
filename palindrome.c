#include<stdio.h>
int main(){
    int num=1231,palin=0,origpalin=num;
    while(num!=0){
        palin=palin*10+num%10;
        num/=10;
    }
    printf("%d\n",palin);
    if(origpalin=palin){      
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    return 0;
}