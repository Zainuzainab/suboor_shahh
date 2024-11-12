#include<stdio.h>
int main(){
    int num;
    printf("enter an value");
    scanf("%d",&num);
    int res=factorial(num);
    printf("%d",res);
return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
else{
    return n*factorial(n-1);

}    
}