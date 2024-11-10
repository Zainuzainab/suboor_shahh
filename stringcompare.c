#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="Hello";
    char b[50]="world";
    int res=strcmp(a,b);
    printf("%d\n",res);
    if(res==0){
        printf("both string are equal\n");
    }
    else if(res==-1){
        printf("string1 is lesser than str2\n");
    }
    else{
        printf("string1 is greater than str2\n");
    }
    printf("%s\n",strrev(a));
    return 0;
}