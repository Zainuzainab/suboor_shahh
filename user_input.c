#include<stdio.h>
int main(){
    int a;
    float x;
    char c[50];
    printf("Enter an integer:");
    scanf("%d",&a);
    printf("Enter a float value:");
    getchar();10
    scanf("%f",&x);
    printf("Enter a character:\n");
    scanf("%s",&c);
    printf("......................");
    printf("value of a %d\n",a);
    printf("value of x %f\n",x);
    printf("value of c %s\n",c);
    return 0;
}