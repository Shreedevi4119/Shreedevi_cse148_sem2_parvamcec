#include<stdio.h>
int main(){
    int num=0,org=0,digit=0,rev=0;
    printf("enter the numbers:");
    scanf("%d",&num);
    org=num;
    while(num!=0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(org==rev){
        printf("the given word is palindrome"); 
    }
    else{
        printf("the given word is not palindrome");
    }
    return 0;
}
