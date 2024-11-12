#include<stdio.h>
int main(){
    char str[]="Hello World";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+'a'-'A';
        }
        i++;
    }
    printf("lowercase string %s\n",str);
    i=0;
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-'a'+'A';
        }
        i++;
    }
    printf("uppercase string %s\n",str);
    return 0;
}