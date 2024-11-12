#include<stdio.h>
#include<string.h>
int main(){
    char str[50] ="abca";
   int start =0;
   int end = strlen(str) -1;
   char temp;
   char orig[20];
   strcpy(orig,str);

   while(start<end){
    temp = str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end++;

   }
   printf("reversed string: %s\n",str);
    if(strcmp(orig,str)==0){      
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    return 0;

   }