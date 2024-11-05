#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=30;
    if(a>c && a>b){
        printf("a is greater ");
    }
    else if(b>c && b>a){
        printf("b is greater ");
    }
    else{
        printf("c is greater");
    }
}