#include<stdio.h>
int main(){
    int row,col,sum;
    printf("enter no of rows");
    scanf("%d",&row);
    scanf("%d",&col);
    int a[row][col];
        printf("enter no of elements");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            
            scanf("%d",&sum);
        }
    } 

    for( int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",sum);
        }
    }
        for( int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                sum[i][j]=row[i][j]+col[i][j];
            }
        }
        printf("\n");
}