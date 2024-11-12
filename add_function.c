#include<stdio.h>
int add(int x,int y){
int c=x+y;
return c;
}
int main(){
int a,b;
printf("enter the number:");
scanf("%d %d",&a,&b);
int sum=add(a,b);
printf("%d",sum);
return 0;

}
