#include<stdio.h>
int main(){
  int  transpose[2][2]; 
 int arr[2][2]={{1,4},{2,3}};
  
 for( int i=0; i<2; i++){
    for(int j=0; j<2; j++){
     transpose[i][j] = arr[j][i];
   
    
    }}
    for( int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        printf("%d ",transpose[i][j]);
    }
     printf("\n");
    }
    return 0;
}
 