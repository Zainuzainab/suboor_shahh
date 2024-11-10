#include<stdio.h>
#include<string.h>
int main(){
    char str[500]="Hello world";
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    printf("the length of string without inbuilt func %s",length);
    
    return 0;

}