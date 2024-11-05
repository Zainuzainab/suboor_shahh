#include <stdio.h>
int main(){
    int num;
    printf("enter a year:");
    scanf("%d",&num);
    if(num %400==0 && num %4==0){
        printf("it is leap year");
    }
    else{
        printf("it is not leap year");
    }
    return 0;
}