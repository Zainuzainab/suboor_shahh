#include <stdio.h>
int main(){
    int b=20;
    int a=12;
    if((a>5)&&(b>5)){
        printf("a and b are greater than 5");

    }
    else{
        printf("a and b are not greater than 5");

    }
    if ((a>5)||(b>5)){
        printf("a and b are greater than 5 \n");

    }
    else{
        printf("a and b are not greater than 5 \n");
    }
    int valid=1;
    int invalid=!valid;
    printf("%d\n",valid);
    printf("%d\n",invalid);
    return 0;
}