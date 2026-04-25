#include<stdio.h>

int sumofn(int num){

    num = (num * (num + 1) ) / 2 ;
    printf("%d\n",num);
    return 0 ;
}
int main(){

    int num ;
    int sum ;
    sum = 0 ;
    scanf("%d",&num);
    for (int i = 1 ;i <= num ; i += 1 )
    {
        sum = sum + i ;
    }
    printf("%d\n",sum);
    sumofn(num);
    return 0 ;
}
