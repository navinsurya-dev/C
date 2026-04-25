#include<stdio.h>

int precision(float i){
    
    printf("%.2f\n",i) ;
    return 0 ;
}
int alignmentR(){

    printf("%2d\n",5) ;
    return 0 ;
}
int alignmentL(){

    printf("%-4d<\n",5) ;
    return 0 ;
}
int main(){
   
    float i = 25.1254 ;
    precision(i) ;
    alignmentR() ;
    alignmentL() ;
    return 0 ;
}
