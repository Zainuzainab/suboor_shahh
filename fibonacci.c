#include<stdio.h>
int main(){
    int n1=0;
    int n2=1;
    int n;
    int i;
    printf("enter the number");                                                                           
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        int n3=n1+n2;
        printf("%d",n1);
        n1=n2;
        n2=n3;
    }
    return 0;
}