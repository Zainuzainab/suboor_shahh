#include<stdio.h>
int binarysearch(int arr[],int size,int target){
    int left=0;
    int rigth=size-1;//9-1=8
    while(left<=rigth){//0<=8
        int mid=left+(rigth-left)/2;//mid=0+(8-0)/2= 4
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            rigth=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[9]={11,21,35,42,58,61,78,81,94};
    int target=81;
    int res=binarysearch(arr,sizeof(arr)/sizeof(arr[0]),target);//9, 9*4/4*1=9, 5
    printf("element found at index is: %d",res);
    return 0;
}