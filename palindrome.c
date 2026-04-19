#include<stdio.h>

int palindrome(int num){

    int rev ;
    int rem ;
    rev = 0 ;
    while (num > 0){
       rem = num % 10 ;
       rev = rev * 10 + rem ;
       num = num / 10 ;
    }
    return rev ;
}
int main(){

    int num ;
    int rev ;
    scanf("%d",&num);
    rev = palindrome(num);
    printf("%d",palindrome(rev));
    return 0 ;
}
