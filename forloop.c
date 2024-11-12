#include<stdio.h>
int main(){
    for(int i=0;i<20;i++){
        if(i %2==0){
        printf( "%d\n",i);
        }
    }
    int i=0;
    while(i<5){
        printf("%d\n",i);
        i++;
    }
    do{
        printf("%d\n",i);
        i++;
    }while(i<5);
     return 0;
}