#include<stdio.h>

int main(){

    int num ;
    scanf("%d",&num);
    for (int i = 1 ; i < 11 ; i += 1)
    {
        printf("%d x %d = %d \n",i,num,i * num);
    }
    return 0 ;
}
