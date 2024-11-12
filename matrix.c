#include<stdio.h>
int main(){
 int arr[3][3]={{1,2,3},{3,4,5},{1,2,3}};
 for( int i=0; i<3; i++){
    for(int j=0; j<3; j++){
    if(i==j){ 
   
    printf("%d ",arr[i][j]);
    }}}
 
    printf("\n");
 
    return 0;
}