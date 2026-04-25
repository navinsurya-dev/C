/*
 * Odd or Even Problem
 *
 */
#include<stdio.h>

int oddorEven(int num){
  
    if ( num & 1 ) 
       puts("Odd Number");
    else 
       puts("Even Number");
    return 0 ;
}
int main(){
   
    int num ;
    scanf("%d",&num);
    if ( num % 2 == 0 )
	    puts("Even Number");
    else 
	    puts("Odd Number");
    oddorEven(num);
    return 0 ;
}
