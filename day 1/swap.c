#include<stdio.h>
int main(){
    int a=0,b=0,temp=0;
    printf("enter the value for a and b:");
    scanf("%d %d",&a,&b);
    temp=0;
    a=b;
    b=temp;
    printf("the values after swaping:%d %d",a,b);
}