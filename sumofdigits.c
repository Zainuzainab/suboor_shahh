#include<stdio.h>
int main(){
    int sum=0,num,digit=0;
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        sum=digit+sum;
        num/=10;
    }
    printf("%d\n",sum);
    return 0;
}