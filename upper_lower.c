#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="Hello";
    char b[50]="WORLD";
     for(int i=0; a[i]!='\0'; i++){
        a[i]=toupper(a[i]);
    }
    printf("%s\n",a);
    for(int i=0; a[i]!='\0';i++){
          b[i]=tolower(b[i]);
    }
    printf("%s\n",b);
    return 0;
}