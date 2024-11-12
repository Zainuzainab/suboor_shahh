#include<stdio.h>
int main(){
    int n;
    printf("enter the number");                                                                           
    scanf("%d",&n);
    int res=fibnacci(n);
    printf("%d",res);
    return 0;
}
int fibnacci(int n){
    if(n=0){
        return 0;
    }
    else if(n=1){
        return 1;
    }
    else{
        return n*fibnacci(n-1);
    }

}


