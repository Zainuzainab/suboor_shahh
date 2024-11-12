#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    printf("enter the number of elements ");
    scanf("%d",&n);
    int* array =(int*)malloc(n *sizeof(int));
    if(array=NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    printf("enter %d element:\n",n);
    for (int i=0; i<n; i++){
        scanf("%d\n ", &array[i]);
    }
    printf("entered  element:");
    for (int i=0; i<n; i++){
        printf("%d\n",array[i]);
    }
   
    free(array);
    return 0; 
}
