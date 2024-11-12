#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="Hello";
    char b[50];
    strcpy(b,a);
    printf("%s",b);
    return 0;
}