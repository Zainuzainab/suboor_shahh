#include<stdio.h>
int main(){
    char str1[100]="hellooo ";
    char str2[]="zainab";
    int i=0,j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i++]=str2[j++];
    }
    int length=strlen(str1);
    printf("%d",length);
    str1[i]='\0';
    
    printf("%s\n",str1);
    length=strlen(str1);
    printf("%d",length);
    return 0;

}